#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

struct e_t {
    int to, cap, rev;

    e_t(int t, int c, int r) : to(t), cap(c), rev(r) {}
};

int vid(const int v, const bool o) {
    return v * 2 + (o ? 1 : 0);
}

void add_edge(const int i, const int j, const int c, vector<vector<e_t>> *adj) {
    (*adj)[i].emplace_back(j, c, (*adj)[j].size());
    (*adj)[j].emplace_back(i, 0, (*adj)[i].size() - 1);
}

vector<int> dijkstra(const vector<bool> &guard, const vector<vector<int>> &A, const int s) {
    vector<int> dist(A.size(), INT_MAX);
    multimap<int, int> q;
    q.emplace(0, s);
    dist[s] = 0;
    while (!q.empty()) {
        const int c = q.begin()->first;
        const int v = q.begin()->second;
        q.erase(q.begin());
        if (dist[v] == c) {
            for (int tv = 0; tv < A[v].size(); ++tv) {
                if (A[v][tv]) {
                    const int tc = dist[v] + 1 + (guard[v] ? 1 : 0);
                    if (tc < dist[tv]) {
                        dist[tv] = tc;
                        q.emplace(tc, tv);
                    }
                }
            }
        }
    }
    return dist;
}

bool levelize(const int V, const int S, const int T, vector<vector<e_t>> *adj, vector<int> *lev) {
    *lev = vector<int>(V, -1);
    queue<int> q;
    (*lev)[S] = 0;
    q.emplace(S);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i = 0; i < (*adj)[v].size(); ++i) {
            const e_t &e = (*adj)[v][i];
            if (e.cap && (*lev)[e.to] == -1) {
                (*lev)[e.to] = (*lev)[v] + 1;
                q.emplace(e.to);
            }
        }
    }
    return (*lev)[T] != -1;
}

int augment(const int S, const int T, const int v, const int f, const vector<int> &lev, vector<vector<e_t>> *adj,
            vector<int> *done) {
    if (v == T || !f) {
        return f;
    }
    for (; (*done)[v] < (*adj)[v].size(); ++(*done)[v]) {
        e_t &e = (*adj)[v][(*done)[v]];
        if (lev[e.to] > lev[v]) {
            const int t = augment(S, T, e.to, min(f, e.cap), lev, adj, done);
            if (t > 0) {
                e.cap -= t;
                (*adj)[e.to][e.rev].cap += t;
                return t;
            }
        }
    }
    return 0;
}

int max_flow(const int V, const int S, const int T, vector<vector<e_t>> *adj) {
    int f = 0, t;
    vector<int> lev;
    while (levelize(V, S, T, adj, &lev)) {
        vector<int> done(V);
        while ((t = augment(S, T, S, INT_MAX, lev, adj, &done))) {
            f += t;
        }
    }
    return f;
}

vector<bool> min_cut(const int V, const int S, const vector<vector<e_t>> &adj) {
    vector<bool> vis(V);
    queue<int> q;
    q.emplace(S);
    vis[S] = 1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (const e_t &e: adj[v]) {
            if (e.cap && !vis[e.to]) {
                q.emplace(e.to);
                vis[e.to] = 1;
            }
        }
    }
    return vis;
}

int taking_over_the_world() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<vector<int>> A(N, vector<int>(N));
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        A[u][v] = A[v][u] = 1;
    }
    const int GUARD = 1000;
    vector<bool> guard(N);
    while (1) {
        const int V = N * 2;
        const int S = vid(0, 0);
        const int T = vid(N - 1, 0);
        vector<vector<e_t>> adj(V);
        for (int v = 0; v < N; ++v) {
            add_edge(vid(v, 0), vid(v, 1), guard[v] ? GUARD : 1, &adj);
        }
        const vector<int> ds = dijkstra(guard, A, 0);
        const vector<int> dt = dijkstra(guard, A, N - 1);
        for (int u = 0; u < N; ++u) {
            for (int v = 0; v < N; ++v) {
                if (A[u][v]) {
                    if (ds[u] != -1 && dt[v] != -1) {
                        int td = ds[u] + (guard[u] ? 1 : 0) + 1 + (v == N - 1 ? 0 : (guard[v] ? 1 : 0) + dt[v]);
                        if (td == ds[N - 1]) {
                            add_edge(vid(u, 1), vid(v, 0), GUARD, &adj);
                        }
                    }
                }
            }
        }
        if (max_flow(V, S, T, &adj) <= K) {
            const vector<bool> mc = min_cut(V, S, adj);
            for (int v = 0; v < N; ++v) {
                if (mc[vid(v, 0)] && !mc[vid(v, 1)]) {
                    guard[v] = 1;
                    --K;
                }
            }
        } else {
            break;
        }
    }
    return dijkstra(guard, A, 0)[N - 1];
}

int main() {
    fastio;
    int T;
    cin >> T;
    for (int test = 1; test <= T; ++test) {
        cout << "Case #" << test << ": " << taking_over_the_world() << endl;
    }
    return 0;
}
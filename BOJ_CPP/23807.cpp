#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

ll INF = LLONG_MAX / 3;

void dijkstra(int st, vector<vector<pair<int, ll>>> &adj, vector<ll> &dist) {
    dist[st] = 0;
    priority_queue<pair<ll, ll>> PQ;
    PQ.push({dist[st], st});
    while (!PQ.empty()) {
        auto[cost, idx] = PQ.top();
        PQ.pop();
        if (dist[idx] != -cost) {
            continue;
        }
        for (auto[nidx, ncost]: adj[idx]) {
            if (dist[nidx] > dist[idx] + ncost) {
                dist[nidx] = dist[idx] + ncost;
                PQ.push({-dist[nidx], nidx});
            }
        }
    }
}

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, ll>>> adj(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    int st, en, p;
    cin >> st >> en >> p;
    vector<int> midpoint(p + 2);
    for (int i = 1; i <= p; ++i) {
        cin >> midpoint[i];
    }
    ll ans = INF;
    midpoint[0] = st;
    vector<vector<ll>> dist(p + 1, vector<ll>(n + 1, INF));
    for (int i = 0; i <= p; ++i) {
        dijkstra(midpoint[i], adj, dist[i]);
    }
    for (int i = 1; i <= p; ++i) {
        if (dist[0][midpoint[i]] == INF) {
            continue;
        }
        for (int j = 1; j <= p; ++j) {
            if (i == j || dist[i][midpoint[j]] == INF) {
                continue;
            }
            for (int k = 1; k <= p; ++k) {
                if (i == k || j == k || dist[j][midpoint[k]] == INF) {
                    continue;
                }
                ans = min(ans, dist[0][midpoint[i]] + dist[i][midpoint[j]] + dist[j][midpoint[k]] + dist[k][en]);
            }
        }
    }
    cout << (ans == INF ? -1 : ans);
    return 0;
}
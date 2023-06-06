#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
vector<pair<int, int>> v[100'001];
int dist[100'001], cnt[100'001];

void Dijkstra() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    memset(dist, 0x3f, sizeof(dist));
    dist[1] = 0;
    cnt[1] = 1;
    pq.push({dist[1], 1});
    while (!pq.empty()) {
        auto pp = pq.top();
        pq.pop();
        int u = pp.second, d = pp.first;
        if (dist[u] != d) {
            continue;
        }
        for (auto e: v[u]) {
            int v = e.first, w = e.second;
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
                cnt[v] = cnt[u];
            } else if (dist[u] + w == dist[v]) {
                cnt[v] += cnt[u];
            }
            cnt[v] = cnt[v] >= 2 ? 2 : cnt[v];
        }
    }
}

int main() {
    fastio
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= k; ++i) {
        int u;
        cin >> u;
    }
    for (int i = 1; i <= m; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].emplace_back(b, c);
        v[b].emplace_back(a, c);
    }
    Dijkstra();
    cout << (cnt[n] > 1 ? "yes" : "no");
    return 0;
}
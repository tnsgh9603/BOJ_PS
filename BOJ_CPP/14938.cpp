#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int dist[101];

int main() {
    fastio;
    int n, m, r;
    cin >> n >> m >> r;
    vector<int> v(n + 1);
    vector<pair<int, int>> adj[101];
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < r; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    int mx = 0;
    for (int i = 1; i <= n; ++i) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, i});
        fill(dist, dist + 101, 987654321);
        dist[i] = 0;
        while (!pq.empty()) {
            auto[cost, now] = pq.top();
            pq.pop();
            for (auto&[next, ncost]: adj[now]) {
                if (dist[next] > cost + ncost) {
                    dist[next] = cost + ncost;
                    pq.push({dist[next], next});
                }
            }
        }
        int sum = 0;
        for (int j = 1; j <= n; ++j) {
            if (dist[j] <= m) {
                sum += v[j];
            }
        }
        mx = max(mx, sum);
    }
    cout << mx;
    return 0;
}
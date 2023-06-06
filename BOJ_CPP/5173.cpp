#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

double const INF = 1000000000.0;
vector<pair<int, double>> adj[1001];
double dist[1001];

int main() {
    fastio;
    int n, m, s, from, to, num, end, x;
    double cost;
    cin >> n >> m >> s;
    for (int i = 0; i < m; ++i) {
        cin >> from >> to >> cost;
        adj[from].push_back({to, cost});
    }
    for (int tc = 1; tc <= s; ++tc) {
        for (int i = 1; i <= n; ++i) {
            dist[i] = INF;
        }
        priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> q;
        cin >> end >> num;
        while (num--) {
            cin >> x;
            dist[x] = 0;
            q.push({0, x});
        }
        while (!q.empty()) {
            double cost = q.top().first;
            int from = q.top().second;
            q.pop();
            if (cost > dist[from]) {
                continue;
            }
            if (from == end) {
                break;
            }
            for (auto next: adj[from]) {
                int to = next.first;
                double dis = next.second + cost;
                if (dis < dist[to]) {
                    dist[to] = dis;
                    q.push({dis, to});
                }
            }
        }
        if (dist[end] == INF) {
            cout << "-1\n";
        } else {
            cout << fixed << setprecision(2) << dist[end] << "\n";
        }
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
vector<pair<int, int>> v[51];
ll dist[51], city[51];
bool visited[51];
#define INF 987654321
queue<int> cycleNode;
int n, st, en, m;
// cycleNode 중에서 도착점으로의 경로가 존재하는지 판단
bool bfs() {
    while (!cycleNode.empty()) {
        int cur = cycleNode.front();
        cycleNode.pop();
        for (auto x : v[cur]) {
            int next = x.first;
            if (!visited[next]) {
                visited[next] = 1;
                cycleNode.push(next);
            }
        }
    }
    return visited[en] ? 1 : 0;
}

int main() {
    fastio;
    cin >> n >> st >> en >> m;
    for (int i = 0; i < m; ++i) {
        int s, e, val;
        cin >> s >> e >> val;
        v[s].push_back({e, val});
    }
    for (int i = 0; i < n; ++i) {
        cin >> city[i];
    }
    fill(dist, dist + n + 1, INF);
    dist[st] = -city[st];
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < v[j].size(); ++k) {
                int next = v[j][k].first, nextCost = v[j][k].second;
                if (dist[j] != INF && dist[next] > dist[j] + nextCost - city[next]) {
                    dist[next] = dist[j] + nextCost - city[next];
                    if (i == n) {
                        visited[j] = 1;
                        cycleNode.push(j);
                    }
                }
            }
        }
    }
    if(dist[en] == INF) {
        cout << "gg";
    }
    else if (bfs()) {
        cout << "Gee";
    } else {
        cout << -dist[en];
    }
    return 0;
}
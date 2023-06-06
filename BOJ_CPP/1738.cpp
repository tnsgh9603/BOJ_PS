#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
vector<pair<int, int>> v[101];
vector<int> rev[101];
long long dist[101];
int previous[101];
bool visited[101];
#define INF 987654321

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int s, e, val;
        cin >> s >> e >> val;
        val *= -1;
        v[s].push_back({e, val});
        rev[e].push_back(s);
    }
    queue<int> q;
    q.push(n);
    visited[n] = 1;
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        for (int i = 0; i < rev[now].size(); ++i) {
            int next = rev[now][i];
            if (!visited[next]) {
                visited[next] = 1;
                q.push(next);
            }
        }
    }
    bool cycle = 0;
    fill(dist + 2, dist + n + 1, INF);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 0; k < v[j].size(); ++k) {
                int next = v[j][k].first, nextCost = v[j][k].second;
                if (dist[j] != INF && dist[next] > dist[j] + nextCost) {
                    dist[next] = dist[j] + nextCost;
                    // j 다음에 next를 방문한다.
                    previous[next] = j;
                    if (i == n && visited[next]) {
                        cycle = 1;
                    }
                }
            }
        }
    }
    if (cycle) {
        cout << -1;
    } else {
        vector<int> ans;
        int idx = n;
        while (1) {
            ans.push_back(idx);
            if (idx == 1) {
                break;
            } else {
                idx = previous[idx];
            }
        }
        for (int i = ans.size() - 1; i >= 0; --i) {
            cout << ans[i] << " ";
        }
    }
    return 0;
}
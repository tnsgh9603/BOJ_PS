#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool visited[100'001];

int main() {
    fastio;
    int n;
    cin >> n;
    vector<pair<int, int>> v[100'001];
    while (n--) {
        int a, b, c;
        cin >> a;
        while (cin >> b && b != -1) {
            cin >> c;
            v[a].push_back({b, c});
        }
    }
    int mx = -1, idx;
    queue<pair<int, int>> q1;
    q1.push({1, 0});
    visited[1] = 1;
    while (!q1.empty()) {
        auto[now, sum] = q1.front();
        q1.pop();
        if (mx < sum) {
            mx = max(mx, sum);
            idx = now;
        }
        for (auto &[next, cost]: v[now]) {
            if (!visited[next]) {
                q1.push({next, sum + cost});
                visited[next] = 1;
            }
        }
    }
    memset(visited, 0, sizeof(visited));
    mx = -1;
    queue<pair<int, int>> q2;
    q2.push({idx, 0});
    visited[idx] = 1;
    while (!q2.empty()) {
        auto[now, sum] = q2.front();
        q2.pop();
        mx = max(mx, sum);
        for (auto &[next, cost]: v[now]) {
            if (!visited[next]) {
                q2.push({next, sum + cost});
                visited[next] = 1;
            }
        }
    }
    cout << mx;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
bool is_prime[101];

int main() {
    fastio;
    int n, a, b, m;
    cin >> n >> a >> b >> m;
    vector<int> v[101];
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        v[y].push_back(x);
        v[x].push_back(y);
    }
    queue<pair<int, int>> q;
    is_prime[a] = 1;
    q.push({a, 0});
    while (!q.empty()) {
        auto[now, cnt] = q.front();
        q.pop();
        if (now == b) {
            cout << cnt;
            return 0;
        }
        for (auto next: v[now]) {
            if (!is_prime[next]) {
                is_prime[next] = 1;
                q.push({next, cnt + 1});
            }
        }
    }
    cout << -1;
    return 0;
}
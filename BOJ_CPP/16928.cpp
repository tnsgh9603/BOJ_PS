#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool visited1[101];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 1; i <= n + m; ++i) {
        int a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    queue<pair<int, int>> q;
    q.push({1, 0});
    visited1[1] = 1;
    while (!q.empty()) {
        auto[now, cnt] = q.front();
        q.pop();
        if (now >= 94) {
            cout << cnt + 1;
            return 0;
        }
        for (int i = 1; i <= 6; ++i) {
            int nnow = now + i;
            if (mp.count(nnow)) {
                visited1[mp[nnow]] = 1;
                q.push({mp[nnow], cnt + 1});
            } else if (!visited1[nnow]) {
                visited1[nnow] = 1;
                q.push({nnow, cnt + 1});
            }
        }
    }
    return 0;
}
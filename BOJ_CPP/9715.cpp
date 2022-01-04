#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N;
    cin >> N;
    while (N--) {
        int n, m, ans = 0;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (v[i][j] == '0') {
                    continue;
                }
                int t = v[i][j] & 15;
                ans += 4 * t + 2;
                for (int k = 0; k < 4; ++k) {
                    int nx = i + "1012"[k] - '1', ny = j + "2101"[k] - '1';
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
                        continue;
                    }
                    ans -= min(t, v[nx][ny] & 15);
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int m, n, p, a = 0;
        cin >> m >> n >> p;
        --p;
        vector<vector<int>> v(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> v[i][j];
            }
        }
        for (int j = 0; j < n; ++j) {
            int tmp = 0;
            for (int i = 0; i < m; ++i) {
                tmp = max(tmp, v[i][j]);
            }
            a += max(0, tmp - v[p][j]);
        }
        cout << "Case #" << tc << ": " << a << "\n";
    }
    return 0;
}
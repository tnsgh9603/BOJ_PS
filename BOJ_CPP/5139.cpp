#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        cout << "Data Set " << tc << ":\n";
        for (int i = 0; i < m; ++i) {
            bool flag = 0;
            int ans = 0;
            for (int j = 0; j < n; ++j) {
                if (v[j][i] == 'X') {
                    flag = 1;
                    break;
                }
                ans += (v[j][i] == 'S' ? 1 : 3);
            }
            if (!flag) {
                cout << "N ";
                continue;
            }
            cout << ans << " ";
        }
        cout << "\n\n";
    }
    return 0;
}
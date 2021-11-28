#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m, cur, dir;
        cin >> n >> m;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
            // right
            if (v[i] == 2) {
                cur = i;
                dir = 0;
            }
            //left
            else if (v[i] == 3) {
                cur = i;
                dir = 1;
            }
        }
        int cnt = 0;
        for (int i = 1; i <= m; ++i) {
            if (cur == 1) {
                dir = 0;
            } else if (cur == n) {
                dir = 1;
            }
            (dir ? --cur : ++cur);
            if (v[cur] == 0) {
                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
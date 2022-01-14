#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, l, r;
    while (cin >> n >> l >> r && n) {
        int cnt = 0;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
        }
        for (int x = l; x <= r; ++x) {
            bool flag = 1;
            for (int i = 1; i <= n; ++i) {
                if (x % v[i] == 0) {
                    if (i & 1) {
                        ++cnt;
                    }
                    flag = 0;
                    break;
                }
            }
            if (flag && n % 2 == 0) {
                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
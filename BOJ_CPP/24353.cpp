#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, s, m;
    cin >> n >> s >> m;
    int ans = 0;
    for (int i = 1; i <= 12; ++i) {
        int cnt = 0, n1 = i + 10, n2 = s;
        for (int n3 = 10; n3 <= n; ++n3) {
            if (n3 < 11 || n3 > 22) {
                int num = n1 * 1000 + n2 * 100 + n3 % 100;
                if (!(num % (n1 + n2)) || !(num % (n1 + n3)) || !(num % (n2 + n3))) {
                    ++cnt;
                    if (i == m && !ans) {
                        ans = n3;
                    }
                }
            }
        }
        cout << cnt << "\n";
    }
    if (ans) {
        cout << m + 10 << " " << s << " " << ans;
    } else {
        cout << "0 0 0";
    }
    return 0;
}
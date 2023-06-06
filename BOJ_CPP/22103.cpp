#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n, m, p, q, t, ans = 1;
        cin >> n >> m >> p >> q >> t;
        if (p < q) {
            swap(n, m);
            swap(p, q);
        }
        int a = t / p, x = n / a, c = n - x * a;
        if (c == 0) {
            c = a;
            --x;
        }
        ans += x;
        int u = t - c * p;
        m -= u / q;
        int b = t / q;
        if (m > 0) {
            int y = (m - 1) / b + 1;
            ans += y;
        }
        cout << ans << '\n';
    }
    return 0;
}
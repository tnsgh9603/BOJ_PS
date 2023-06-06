#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        bool flag1 = a + b + c > d + e + f, flag2 = 0;
        if (a > d || a == d and (b > e || b == e && c > f)) {
            flag2 = 1;
        }
        cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << "\n"
             << (flag1 && flag2 ? "both" : flag1 ? "count" : flag2 ? "color" : "none") << "\n\n";
    }
    return 0;
}
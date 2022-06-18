#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int C, n, a, b, c, i;
    long long m = 0;
    cin >> C >> n;
    for (i = 1; i <= n; ++i) {
        cin >> a >> b >> c;
        if (m < a) {
            break;
        }
        m += b - a;
        if (m > C) {
            break;
        }
        if (c > 0 && m != C) {
            break;
        }
    }
    cout << (i == n + 1 && m == 0 ? "possible" : "impossible");
    return 0;
}
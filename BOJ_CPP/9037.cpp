#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int tt, n, c[11];

bool f2() {
    bool res = 1;
    for (int i = 1; i <= n; ++i) {
        if (c[i] & 1) {
            ++c[i];
        }
        if (c[i] != c[1]) {
            res = 0;
        }
    }
    return res;
}

void f1() {
    int h[11];
    for (int i = 1; i <= n; ++i) {
        c[i] /= 2, h[i] = c[i];
    }
    h[0] = h[n];
    for (int i = 1; i <= n; ++i) {
        c[i] += h[i - 1];
    }
}

int main() {
    fastio;
    cin >> tt;
    while (tt--) {
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cin >> c[i];
        }
        int ans = 0;
        while (!f2()) {
            f1();
            ++ans;
        }
        cout << ans << "\n";
    }
    return 0;
}
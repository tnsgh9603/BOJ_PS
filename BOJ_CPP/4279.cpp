#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int g[21], s[21], b[21];

bool chk1(int n, int c, double x, double y, double z) {
    double mx = -1;
    for (int i = 1; i <= n; ++i) {
        double w = g[i] * x + s[i] * y + b[i] * z;
        if (w > mx) {
            mx = w;
        }
    }
    return g[c] * x + s[c] * y + b[c] * z >= mx;
}

bool chk2(int n, int c) {
    for (int j = -2; j <= 2; ++j) {
        for (int k = -3; k <= 3; ++k) {
            if (chk1(n, c, 1, pow(n, j), pow(n, k))) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        string S;
        memset(g, 0, sizeof(g));
        memset(s, 0, sizeof(s));
        memset(b, 0, sizeof(b));
        int c = -1;
        for (int i = 1; i <= n; ++i) {
            cin >> S >> g[i] >> s[i] >> b[i];
            if (S == "Canada") {
                c = i;
            }
        }
        cout << "Canada " << (chk2(n, c) ? "wins!" : "cannot win.") << "\n";
    }
    return 0;
}

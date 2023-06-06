#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, w, l, h, a, m;
    while (cin >> n >> w >> l >> h >> a >> m && n) {
        int p = n * (w * l + (w + l) * h * 2);
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            p -= x * y * n;
        }
        cout << (p + a - 1) / a << "\n";
    }
    return 0;
}
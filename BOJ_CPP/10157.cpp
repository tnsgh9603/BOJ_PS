#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int c, r, k;
    cin >> c >> r >> k;
    if (c * r < k) {
        cout << 0;
    } else {
        int x, y, i, tx = 0, ty = 1, g = r - 1, t, cnt = 0;
        for (x = y = i = 1; i < k; ++i) {
            x += tx;
            y += ty;
            if (i == g) {
                g = i + (tx ? r : c) - 1 - cnt / 2;
                t = tx;
                tx = ty;
                ty = -t;
                ++cnt;
            }
        }
        cout << x << " " << y;
    }
    return 0;
}
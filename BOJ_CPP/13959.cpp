#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int d, r, t, c = 0, ry = 4, ty;
    cin >> d >> r >> t;
    ty = ry - d;
    while (1) {
        c += ry;
        if (ty >= 3) {
            c += ty;
        }
        if (c == r + t) {
            for (int i = 4; i <= ry; ++i) {
                r -= i;
            }
            cout << r;
            return 0;
        }
        ++ry;
        ++ty;
    }
}
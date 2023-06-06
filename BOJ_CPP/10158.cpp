#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int w, h, p, q, t;
    cin >> w >> h >> p >> q >> t;
    p += t;
    q += t;
    p %= 2 * w;
    q %= 2 * h;
    if (p > w) {
        p = 2 * w - p;
    }
    if (q > h) {
        q = 2 * h - q;
    }
    cout << p << " " << q;
    return 0;
}
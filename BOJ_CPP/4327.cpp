#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d;
    while (cin >> a >> b >> c >> d && (a || b || c || d)) {
        a *= 9;
        b *= 9;
        c *= 9;
        d *= 9;
        cout << 1080 + (a - b + 360) % 360 + (c - b + 360) % 360 + (c - d + 360) % 360 << "\n";
    }
    return 0;
}
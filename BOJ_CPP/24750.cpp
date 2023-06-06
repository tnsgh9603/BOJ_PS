#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = -1, y, st = (c + d + a - 1) / a, l = lcm(lcm(a, b), max(d, 1));
    for (int i = st; i < st + l; ++i) {
        if (a * i % b == d % b) {
            x = i;
            y = (a * i - d) / b;
            break;
        }
    }
    if (x == -1) {
        cout << "No solution.";
    } else {
        cout << "We need " << x << " truck" << (x != 1 ? "board" : "") << " and " << y << " boat" << (y != 1 ? "board" : "")
             << '.';
    }
    return 0;
}
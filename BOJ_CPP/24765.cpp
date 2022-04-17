#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d, e, f;
    while (cin >> a >> b >> c >> d && a) {
        e = (a + b == 3 ? 300 : (a == b ? 200 + a : (a > b ? 10 * a + b : 10 * b + a)));
        f = (c + d == 3 ? 300 : (c == d ? 200 + c : (c > d ? 10 * c + d : 10 * d + c)));
        cout << (e == f ? "Tie" : "Player " + to_string(e > f ? 1 : 2) + " wins") << ".\n";
    }
    return 0;
}
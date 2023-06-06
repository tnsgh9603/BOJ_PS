#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int x, y, a = 0, b = 0;
    cin >> x >> y;
    for (int i = 0; i < x + y; ++i) {
        ++(a < x && (b == y || x < y) ? a : b);
        cout << a << ":" << b << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void get(int n, int &y, int &x) {
    int i;
    for (i = 1; i * (i + 1) / 2 < n; i++);
    y = 1 + i * (i + 1) / 2 - n, x = i - i * (i + 1) / 2 + n;
}

int main() {
    fastio;
    int T, y, x, ay, ax, by, bx, a, b, n;
    cin >> T;
    while (T--) {
        cin >> a >> b;
        get(a, ay, ax);
        get(b, by, bx);
        y = ay + by, x = ax + bx;
        n = y + x - 1;
        n = n * (n + 1) / 2;
        cout << n - y + 1 << "\n";
    }
    return 0;
}
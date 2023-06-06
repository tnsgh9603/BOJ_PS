#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
struct P {
    int x, y;

} a[3];

int main() {
    fastio;
    int n, m, p;
    cin >> n >> m >> p;
    a[0] = {0, 0};
    a[1] = {n, m};
    a[2] = {p, 0};

    int b = 0;
    for (int i = 0; i < 3; ++i) {
        int j = (i + 1) % 3;
        int dy = abs(a[j].y - a[i].y);
        int dx = abs(a[j].x - a[i].x);
        b += gcd(dx, dy);
    }
    cout << (p * m - b) / 2 + 1;
    return 0;
}
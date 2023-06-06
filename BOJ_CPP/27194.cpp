#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double n, t, m, x, y;
    cin >> n >> t >> m >> x >> y;
    x *= 60;
    y *= 60;
    cout << ceil(max(0.0, m / x + (n - m) / y - t));
    return 0;
}
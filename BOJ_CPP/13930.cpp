#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double x, y, a, b, c, n;
    cin >> x >> y >> n;
    double q = y;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
        q -= (b - a);
        q += (b - a) * c;
    }
    cout << setprecision(10) << x / q;
    return 0;
}
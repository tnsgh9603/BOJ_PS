#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    double a = hypot(xb - xc, yb - yc), b = hypot(xc - xa, yc - ya), c = hypot(xa - xb, ya - yb);
    cout << fixed << setprecision(9)
         << ((xb - xa) * (yc - ya) == (yb - ya) * (xc - xa) ? -1 : (max({a, b, c}) - min({a, b, c})) * 2);
    return 0;
}
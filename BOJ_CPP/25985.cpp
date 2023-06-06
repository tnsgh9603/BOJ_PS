#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const double PI = acos(-1);

signed main() {
    fastio;
    double x, y;
    cin >> x >> y;
    cout << fixed << setprecision(20) << (1 / (1 - x / 100) - 1) / (1 / (1 - y / 100) - 1);
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        double v, d, g = 9.8;
        cin >> v >> d;
        cout << fixed << setprecision(9) << "Case #" << tc << ": " << asin(min(1.0, d * g / v / v)) * 180 / acos(-1) / 2 << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double a, b;
    while (cin >> a >> b && a) {
        double mn = 987654321;
        for (double i = 1; i <= a; ++i) {
            mn = min(mn, abs(hypot(i, a - i) - b));
        }
        cout << fixed << setprecision(3) << mn << "\n";
    }
    return 0;
}
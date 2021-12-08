#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const double PI = acos(-1);

double F, R, T, r, adj, V;

double getArea(double x, double y, double a, double b) {
    double z = (x + a) / 2, c = (y + b) / 2;
    if (a * a + b * b <= V) {
        return (a - x) * (b - y);
    }
    if (x * x + y * y >= V || a - x < 5e-7) {
        return 0;
    }
    return getArea(x, y, z, c) + getArea(z, y, a, c) + getArea(x, c, z, b) + getArea(z, c, a, b);
}

int main() {
    fastio;
    int TC;
    cin >> TC;
    for (int t = 1; t <= TC; ++t) {
        cin >> F >> R >> T >> r >> adj;
        F /= R;
        T /= R;
        adj /= R;
        r /= R;
        R /= R;
        T += F;
        T = min(1., T);
        double ans = PI / 4;
        V = (1 - T) * (1 - T);
        for (double x = r + F; x <= 1. - T; x += 2 * r + adj)
            for (double y = r + F; y <= 1. - T; y += 2 * r + adj) {
                double a = x + adj - 2 * F, b = y + adj - 2 * F;
                if (x > a || y > b) {
                    continue;
                }
                ans -= getArea(x, y, a, b);
            }
        ans /= PI;
        ans *= 4;
        cout << "Case #" << t << ": " << fixed << setprecision(6) << ans << "\n";
    }
    return 0;
}
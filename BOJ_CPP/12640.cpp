#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve() {
    int n;
    cin >> n;
    double p[3] = {0, 0, 0}, v[3] = {0, 0, 0};
    for (int i = 0; i < n; ++i) {
        double x, y, z, vx, vy, vz;
        cin >> x >> y >> z >> vx >> vy >> vz;
        p[0] += x;
        p[1] += y;
        p[2] += z;
        v[0] += vx;
        v[1] += vy;
        v[2] += vz;
    }
    auto dist = [p, v](double t) {
        double x = v[0] * t + p[0], y = v[1] * t + p[1], z = v[2] * t + p[2];
        return sqrt(x * x + y * y + z * z);
    };
    double a = v[0] * v[0] + v[1] * v[1] + v[2] * v[2], b = p[0] * v[0] + p[1] * v[1] + p[2] * v[2], t = max(0.0,
                                                                                                             -b / a);
    cout << dist(t) / n << " " << t << "\n";
}

int main() {
    fastio;
    int tc, i = 1;
    cin >> tc;
    cout << fixed << setprecision(9);
    while (tc--) {
        cout << "Case #" << i++ << ": ";
        solve();
    }
    return 0;
}

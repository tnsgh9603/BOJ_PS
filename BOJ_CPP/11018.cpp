#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int k, n;
    double M, m[30], t[30], f[30];
    cin >> k;
    for (int tc = 1; tc <= k; ++tc) {
        cin >> n >> M;
        for (int i = 0; i < n; ++i) {
            cin >> m[i] >> t[i] >> f[i];
            M += m[i];
        }
        double x = 0, v = 0;
        for (int i = 0; i < n; ++i) {
            double a = f[i] / M;
            a -= 9.81;
            x += v * t[i] + a * t[i] * t[i] / 2;
            v += a * t[i];
            M -= m[i];
        }
        cout << "Data Set " << tc << ":\n" << fixed << setprecision(2) << x << "\n\n";
    }
    return 0;
}
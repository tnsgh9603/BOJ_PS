#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        double a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        double f = c / (a * cos(b * M_PI / 180)), g = a * f * sin(b * M_PI / 180) - 9.81 * f * f / 2;
        cout << (d + 1 <= g && g <= e - 1 ? "Safe" : "Not Safe") << "\n";
    }
    return 0;
}

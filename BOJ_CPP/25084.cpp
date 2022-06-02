#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
long long a, b, r, s, t;
const double PI = acos(-1);

int main() {
    fastio;
    cin >> t;
    for (int c = 1; c <= t; ++c) {
        cin >> r >> a >> b;
        for (s = 0; r;) {
            s += r * r;
            r *= a;
            s += r * r;
            r /= b;
        }
        cout << fixed << setprecision(9) << "Case #" << c << ": " << PI * s << "\n";
    }
    return 0;
}
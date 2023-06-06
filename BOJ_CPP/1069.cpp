#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int x, y, d, t;
    cin >> x >> y >> d >> t;
    double dist = hypot(x, y);
    int jump = dist / d;
    double remain = dist - jump * d;
    double ans = min(dist, remain + jump * t);
    ans = min({ans, (jump + 1) * d - dist + (jump + 1) * t, (jump > 0 ? double(jump + 1) : 2) * t});
    cout << fixed << setprecision(9) << ans;
    return 0;
}
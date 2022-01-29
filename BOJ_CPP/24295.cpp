#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int w, x, y, z, a, b, c, d;
    cin >> w >> x >> y >> z;
    vector<tuple<double, double, int>> v;
    int x1 = min(10 * w + x, 10 * y + z), y1 = max(10 * w + x, 10 * y + z);
    for (int i = 1; i <= 2; ++i) {
        cin >> a >> b >> c >> d;
        int x2 = min(10 * a + b, 10 * c + d), y2 = max(10 * a + b, 10 * c + d);
        if (x2 >= x1 + 10 && y2 > y1) {
            v.push_back({x2, y2, i});
        }
    }
    if (!v.empty()) {
        sort(v.begin(), v.end());
        auto[a, b, c] = v[0];
        cout << c << "\n" << fixed << setprecision(1) << a / 10 << " " << b / 10;
    } else {
        cout << 0;
    }
    return 0;
}
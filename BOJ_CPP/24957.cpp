#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const double PI = acos(-1);

int main() {
    fastio;
    double n, r, a, b, c, subtract = 0;
    cin >> n >> r;
    vector<tuple<int, int, int>> v;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
        v.push_back({a, b, c});
    }
    for (int i = 0; i < n; ++i) {
        auto[a, b, c] = v[i];
        auto[d, e, f] = (i == n - 1 ? v[0] : v[i + 1]);
        double dist = sqrt((a - d) * (a - d) + (b - e) * (b - e) + (c - f) * (c - f));
        subtract += PI * 2 / 3 * (r - dist / 2) * (r - dist / 2) * (2 * r + dist / 2);
    }
    cout << fixed << setprecision(7) << PI * 4 * r * r * r / 3 * n - subtract;
    return 0;
}
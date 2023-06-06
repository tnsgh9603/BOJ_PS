#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, a, b, c;
    string s;
    while (cin >> n && ~n) {
        vector<tuple<int, int, int, string>> v;
        for (int i = 0; i < n; ++i) {
            cin >> a >> b >> c >> s;
            v.push_back({a, b, c, s});
        }
        int mn = INT_MAX, mx = -INT_MAX, mx_idx, mn_idx;
        for (int i = 0; i < n; ++i) {
            auto[a, b, c, s] = v[i];
            if (mn > a * b * c) {
                mn = a * b * c;
                mn_idx = i;
            }
            if (mx < a * b * c) {
                mx = a * b * c;
                mx_idx = i;
            }
        }
        auto[q, w, e, r] = v[mx_idx];
        auto[z, x, c, a] = v[mn_idx];
        cout << r << " took clay from " << a << ".\n";
    }
    return 0;
}
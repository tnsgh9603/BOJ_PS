#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long double n, a, b;
    cin >> n >> a >> b;
    vector<tuple<double, double, double>> v1, v2;
    for (int i = 0; i < n; ++i) {
        int q, w;
        cin >> q >> w;
        v1.push_back({q, w, i});
        v2.push_back({w, q, i});
    }
    if (v1.size() == 1) {
        auto[q1, w1, e1] = v1[0];
        cout << fixed << setprecision(2) << max(a / q1, b / w1);
        return 0;
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    cout << fixed << setprecision(2);
    auto[q1, w1, e1] = v1[0];
    auto[q2, w2, e2] = v1[1];
    auto[q3, w3, e3] = v2[0];
    auto[q4, w4, e4] = v2[1];
    if (e1 == e3) {
        cout << max(a / q1 + b / q4, a / q2 + b / q3);
    } else {
        cout << a / q1 + b / q3;
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    vector<double> v1{a, b, c}, v2{e, f};
    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());
    double sum1 = 0, sum2 = 0;
    sum1 = (a + b + c) * (100 - d) / 100;
    sum2 = v1[0] * (100 - v2[0]) / 100 + v1[1] * (100 - v2[1]) / 100 + v1[2];
    cout << fixed << setprecision(2) << (sum1 < sum2 ? "one" : "two") << " " << a + b + c - (sum1 < sum2 ? sum1 : sum2);
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double p, n;
    cin >> p;
    n = (1 - p) * (1 - p);
    pair<double, int> ans(1.0, 1);
    for (int i = 2; i <= 16; ++i) {
        ans = min(ans, {n / i + 1 - n, i});
        n *= (1.0 - p);
    }
    cout << ans.second;
    return 0;
}
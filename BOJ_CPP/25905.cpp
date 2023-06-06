#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    vector<double> v(10);
    for (int i = 0; i < 10; ++i) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    double ans = 1;
    for (int i = 1; i <= 9; ++i) {
        ans *= v[i - 1] / i;
    }
    cout << fixed << setprecision(6) << ans * 1000000000;
    return 0;
}
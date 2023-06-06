#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

long long c[1001], t[1001], p[1001], d[1001];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> c[i] >> t[i] >> p[i];
    }
    for (int j = 1; j <= m; ++j) {
        cin >> d[j];
    }
    long long mx = LLONG_MAX;
    int ans = -1;
    for (int i = 1; i <= n; ++i) {
        long long cost = 100 * c[i];
        for (int j = 1; j <= m; ++j) {
            if (d[j] >= t[i]) {
                long long k = (d[j] + t[i] - 1) / t[i];
                cost += k * p[i];
            }
        }
        if (cost < mx) {
            mx = cost;
            ans = i;
        }
    }
    cout << ans << "\n";
    return 0;
}
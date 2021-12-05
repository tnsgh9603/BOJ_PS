#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N;
    cin >> N;
    double ans = 0.0;
    for (int i = 0; i < N; ++i) {
        double q, len;
        cin >> q >> len;
        ans += q * len;
    }
    cout << fixed << setprecision(3) << ans;
    return 0;
}
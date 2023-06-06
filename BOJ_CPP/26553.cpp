#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int K, P, X;
        cin >> K >> P >> X;
        double ans = INT_MAX;
        for (int i = 1; i <= 10000; ++i) {
            ans = min(ans, X * i + ((double) K / i) * P);
        }
        cout << fixed << setprecision(3) << ans << "\n";
    }
    return 0;
}

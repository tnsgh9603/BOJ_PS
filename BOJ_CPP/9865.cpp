#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        int n;
        cin >> n;
        int sum1 = 0, sum2 = 0;
        for (int i = 1; i <= n; ++i) {
            int a, b;
            cin >> a >> b;
            if (a == 2 and b == 1) {
                sum2 += 6;
            } else if (a == 1 and b == 2) {
                sum1 += 6;
            } else if (a - b == 1) {
                sum2 += a + b;
            } else if (b - a == 1) {
                sum1 += a + b;
            } else {
                if (a > b) {
                    sum1 += a;
                } else if (a < b) {
                    sum2 += b;
                }
            }
        }
        cout << "Game " << tc << ": Tessa " << sum1 << " Danny " << sum2 << "\n";
    }
    return 0;
}
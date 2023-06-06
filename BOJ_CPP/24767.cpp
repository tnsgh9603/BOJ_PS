#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
double x[101], y[101];
bool is_prime[101];

int main() {
    fastio;
    int n;
    double d;
    while (cin >> d >> n && n) {
        for (int i = 1; i <= n; ++i) {
            cin >> x[i] >> y[i];
        }
        memset(is_prime, 0, sizeof(is_prime));
        for (int i = 1; i <= n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                if ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) <= d * d) {
                    is_prime[i] = 1;
                    is_prime[j] = 1;
                }
            }
        }
        int cnt = 0;
        for (int i = 1; i <= n; ++i) {
            if (!is_prime[i]) {
                ++cnt;
            }
        }
        cout << n - cnt << " sour, " << cnt << " sweet\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
double a[16][32768], p;
int b[16][32768];

int main() {
    fastio;
    int T, t;
    cin >> T;
    for (t = 1; t <= T; ++t) {
        int m;
        long long x;
        cin >> m >> p >> x;
        x = (x * (1LL << m)) / 1000000LL;
        a[0][0] = 0.;
        a[0][1] = 1.;
        for (int i = 1; i <= m; ++i) {
            for (int j = 0; j <= (1 << i); ++j) {
                a[i][j] = -1.;
            }
            for (int j = 0; j <= (1 << (i - 1)); ++j) {
                for (int k = 0; k <= j; ++k) {
                    if (p * a[i - 1][j] + (1 - p) * a[i - 1][k] > a[i][j + k]) {
                        a[i][j + k] = p * a[i - 1][j] + (1 - p) * a[i - 1][k];
                        b[i][j + k] = j;
                    }
                }
            }
        }
        cout << fixed << setprecision(9) << "Case #" << t << ": " << a[m][x] << "\n";
    }
    return 0;
}

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
        arr[0][0] = 0.;
        arr[0][1] = 1.;
        for (int i = 1; i <= m; ++i) {
            for (int j = 0; j <= (1 << i); ++j) {
                arr[i][j] = -1.;
            }
            for (int j = 0; j <= (1 << (i - 1)); ++j) {
                for (int k = 0; k <= j; ++k) {
                    if (p * arr[i - 1][j] + (1 - p) * arr[i - 1][k] > arr[i][j + k]) {
                        arr[i][j + k] = p * arr[i - 1][j] + (1 - p) * arr[i - 1][k];
                        b[i][j + k] = j;
                    }
                }
            }
        }
        cout << fixed << setprecision(9) << "Case #" << t << ": " << arr[m][x] << "\n";
    }
    return 0;
}

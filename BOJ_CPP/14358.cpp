#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int idx;
double arr[201], board[221][221];

int main() {
    fastio;
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        cout << "Case #" << t << ": ";
        int n, k;
        cin >> n >> k;
        double dp[n];
        for (int i = 0; i < n; ++i) {
            cin >> dp[i];
        }
        sort(dp, dp + n);
        double ans = 0.0;
        for (int d = 0; d <= k; ++d) {
            idx = 0;
            for (int i = 0; i < d; ++i) {
                arr[idx++] = dp[i];
            }
            for (int i = n - (k - d); i < n; ++i) {
                arr[idx++] = dp[i];
            }
            for (int i = 0; i < 220; ++i) {
                for (int j = 0; j < 220; ++j) {
                    board[i][j] = 0;
                }
            }
            board[0][0] = 1.0;
            for (int i = 0; i < k; ++i) {
                for (int j = 0; j <= k; ++j) {
                    board[i + 1][j] += board[i][j] * (1 - arr[i]);
                    board[i + 1][j + 1] += board[i][j] * (arr[i]);
                }
            }
            ans = max(ans, board[k][k / 2]);
        }
        cout << fixed << setprecision(6) << ans << "\n";
    }
    return 0;
}
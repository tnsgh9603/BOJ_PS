#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[3][100'001], dp[3][100'001];

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        for (int i = 1; i <= 2; ++i) {
            for (int j = 1; j <= n; ++j) {
                cin >> board[i][j];
            }
        }
        memset(dp, 0, sizeof(dp));
        dp[1][1] = board[1][1];
        dp[2][1] = board[2][1];
        for (int i = 1; i <= 2; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (j - 1 >= 1) {
                    dp[2][j] = max(dp[2][j], dp[1][j - 1] + board[2][j]);
                    dp[1][j] = max(dp[1][j], dp[2][j - 1] + board[1][j]);
                }
                if (j - 2 >= 1) {
                    dp[2][j] = max(dp[2][j], dp[1][j - 2] + board[2][j]);
                    dp[1][j] = max(dp[1][j], dp[2][j - 2] + board[1][j]);
                }
            }
        }
        cout << max(dp[1][n], dp[2][n]) << "\n";
    }
    return 0;
}
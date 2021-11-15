#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string DB[6] = {"ABC", "ACB", "BAC", "BCA", "CAB", "CBA"}, s;
int dp[7001][6], tdp[7001][6];

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cin >> s;
        int N = s.length(), i, j, k;
        for (i = 0; i < 6; ++i) {
            dp[0][i] = 0;
        }
        for (i = 0; i < N; ++i) {
            for (j = 0; j <= i + 1; ++j) {
                for (k = 0; k < 6; k++) {
                    tdp[j][k] = 987654321;
                }
            }
            int mn = 987654321;
            for (j = 0; j <= i; ++j) {
                for (k = 0; k < 6; ++k) {
                    mn = min(mn, dp[j][k]);
                    if (DB[k][j % 3] == s[i]) {
                        tdp[j + 1][k] = min(tdp[j + 1][k], dp[j][k] + 1);
                    }
                    if (j != 0 && DB[k][(j + 2) % 3] == s[i]) {
                        tdp[j][k] = min(tdp[j][k], dp[j][k]);
                    }
                    if (j >= 2 && DB[k][(j + 1) % 3] == s[i]) {
                        tdp[j - 1][k] = min(tdp[j - 1][k], dp[j][k]);
                    }
                    if (j >= 3 && DB[k][j % 3] == s[i]) {
                        tdp[j - 2][k] = min(tdp[j - 2][k], dp[j][k]);
                    }
                }
            }
            for (k = 0; k < 6; ++k) {
                if (DB[k][0] == s[i]) {
                    dp[1][k] = min(dp[1][k], mn + 1);
                }
            }
            for (j = 0; j <= i + 1; ++j) {
                for (k = 0; k < 6; ++k) {
                    dp[j][k] = tdp[j][k];
                }
            }
            dp[1][0] = min(dp[1][0], dp[1][1]);
            dp[1][2] = min(dp[1][2], dp[1][3]);
            dp[1][4] = min(dp[1][4], dp[1][5]);
            dp[1][1] = dp[1][0], dp[1][3] = dp[1][2], dp[1][5] = dp[1][4];
        }
        int ans = 987654321;
        for (j = 0; j <= N; ++j) {
            for (k = 0; k < 6; ++k) {
                ans = min(ans, dp[j][k]);
            }
        }
        cout << "Case #" << tc << ": " << N + ans * 2 << "\n";
    }
    return 0;
}
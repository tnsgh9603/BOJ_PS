#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int dp[31][31];

int main() {
    fastio;
    int R, C, W, ans = 0;
    cin >> R >> C >> W;
    dp[1][1] = 1;
    for (int i = 1; i <= 30; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i][j] = (j == 1 || j == i ? 1 : dp[i - 1][j - 1] + dp[i - 1][j]);
        }
    }
    for (int i = 0; i < W; ++i) {
        for (int j = 0; j <= i; ++j) {
            ans += dp[R + i][C + j];
        }
    }
    cout << ans;
}
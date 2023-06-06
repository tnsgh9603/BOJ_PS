#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int dp[2001][2001], mod = 1e9 + 7;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
    }
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = 1;
        for (int j = 1; j <= i; ++j) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
        }
    }
    int ans = dp[n][k];
    for (int i = 1; i < k; ++i) {
        ans = (ans * 2) % mod;
    }
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[501][501], dp[501][501];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> arr[i][j];
        }
    }
    dp[1][1] = arr[1][1];
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
        }
    }
    int mx = 0;
    for (int i = 1; i <= n; ++i) {
        mx = max(mx, dp[n][i]);
    }
    cout << mx;
    return 0;
}
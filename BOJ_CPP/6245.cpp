#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char t[3], x[] = "A23456789TJQK";
int s[9][9], dp[9][9];
int main() {
    fastio;
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> t;
            for (int k = 0; k < 13; ++k) {
                if (t[0] == x[k]) {
                    s[i][j] = k + 1;
                    break;
                }
            }
        }
    }
    for(int i = n; i >= 1; --i) {
        for (int j = 1; j <= n; ++j) {
            dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]) + s[i][j];
        }
    }
    cout << dp[1][n];
    return 0;
}
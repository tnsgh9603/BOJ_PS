#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int dp[10];
const int MOD = 1e4 + 7;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < 10; ++i) {
        dp[i] = 1;
    }
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= 9; ++j) {
            dp[j] += dp[j - 1];
        }
    }
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += dp[i];
        sum %= MOD;
    }
    cout << sum;
    return 0;
}
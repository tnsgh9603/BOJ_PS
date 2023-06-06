#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
long long dp[100'001], arr[100'001];

int main() {
    fastio;
    int n;
    cin >> n;
    long long mx;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        if (i == 1) {
            mx = arr[1];
            dp[1] = arr[1];
        } else {
            dp[i] = max(dp[i - 1] + arr[i], arr[i]);
            mx = max(mx, dp[i]);
        }
    }
    cout << mx;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1001], dp[1001];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    dp[1] = arr[1];
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if(i - j >= 0) {
                dp[i] = max(dp[i - j] + arr[j], dp[i]);
            }
        }
    }
    cout << dp[n];
    return 0;
}
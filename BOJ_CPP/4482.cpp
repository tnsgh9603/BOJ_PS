#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1001], dp[1001];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= 1000; ++i) {
        arr[i] = arr[i - 1] + i;
        dp[i] = arr[i] + dp[i - 1];
    }
    for (int i = 1; i <= n; ++i) {
        int m;
        cin >> m;
        cout << i << ": " << m << " " << dp[m] << "\n";
    }
    return 0;
}
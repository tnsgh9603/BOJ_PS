#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[10001][101];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> arr1[i][j];
        }
    }
    int cnt = 0;
    for (int i = 2; i <= n; ++i) {
        int sum = 0;
        for (int j = 1; j <= m; ++j) {
            sum += abs(arr1[1][j] - arr1[i][j]);
        }
        if (sum > 2000) {
            ++cnt;
        }
    }
    cout << (cnt >= (n - 1.) / 2 ? "YES" : "NO");
    return 0;
}
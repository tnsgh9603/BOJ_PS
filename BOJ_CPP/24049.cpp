#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1001][1001];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i][0];
    }
    for (int i = 1; i <= m; ++i) {
        cin >> arr[0][i];
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            arr[i][j] = arr[i - 1][j] == arr[i][j - 1] ? 0 : 1;
        }
    }
    cout << arr[n][m];
    return 0;
}
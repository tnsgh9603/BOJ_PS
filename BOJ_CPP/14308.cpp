#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[3001][3001], arr2[3001][3001];

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        memset(arr1, 0, sizeof(arr1));
        memset(arr2, 0, sizeof(arr2));
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = 1, x, y; i <= k; ++i) {
            cin >> x >> y;
            arr1[++x][++y] = 1;
        }
        long long ans = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (arr1[i][j]) {
                    continue;
                }
                int mn = min({arr2[i - 1][j - 1], arr2[i - 1][j], arr2[i][j - 1]});
                arr2[i][j] = mn + 1;
                ans += arr2[i][j];
            }
        }
        cout << "Case #" << tc << ": " << ans << "\n";
    }
    return 0;
}

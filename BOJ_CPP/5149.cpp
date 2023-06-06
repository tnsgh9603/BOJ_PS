#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr1[501], y[501], arr1[501];

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n, m, min_x = INT_MAX, min_y = INT_MAX, max_x = -INT_MAX, max_y = -INT_MAX;
        cin >> n >> m;
        for (int i = 1; i <= n; ++i) {
            cin >> arr1[i] >> y[i];
        }
        memset(arr1, 0, sizeof(arr1));
        for (int i = 0; i < m; ++i) {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++) {
            min_x = min(min_x, arr1[arr1[i]]);
            min_y = min(min_y, y[arr1[i]]);
            max_x = max(max_x, arr1[arr1[i]]);
            max_y = max(max_y, y[arr1[i]]);
        }
        int cnt = 0;
        for (int i = 1; i <= n; ++i) {
            if (arr1[i] <= max_x && arr1[i] >= min_x && y[i] <= max_y && y[i] >= min_y) {
                ++cnt;
            }
        }
        cout << "Data Set " << tc << ":\n" << cnt << "\n\n";
    }
    return 0;
}
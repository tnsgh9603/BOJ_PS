#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr1[1001], arr2[1001];

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cout << "Data Set " << tc << ":\n";
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; ++i) {
            cin >> arr1[i] >> arr2[i];
        }
        int ans = 0;
        for (int i = 0; i < m; ++i) {
            int a, b, c;
            cin >> a >> b >> c;
            if (arr1[a] || c == 1) {
                ans += arr2[a];
            }
            if (arr1[b] || c == 2) {
                ans += arr2[b];
            }
        }
        cout << ans << "\n\n";
    }
    return 0;
}

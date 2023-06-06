#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int mx = -1, ans = 0;
        for (int i = 0; i < n; ++i) {
            if (v[i] > mx && (i == n - 1 || v[i] > v[i + 1])) {
                ++ans;
            }
            mx = max(mx, v[i]);
        }
        cout << "Case #" << tc << ": " << ans << "\n";
    }
    return 0;
}
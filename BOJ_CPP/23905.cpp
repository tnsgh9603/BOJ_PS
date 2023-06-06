#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n, k;
        cin >> n >> k;
        int ans = 0, cur = -1;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            cur = (x == k || x == cur - 1 ? x : -1);
            if (cur == 1) {
                ++ans;
            }
        }
        cout << "Case #" << tc << ": " << ans << "\n";
    }
    return 0;
}
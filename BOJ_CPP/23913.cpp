#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int N;
        cin >> N;
        vector<int> v(N);
        for (int i = 0; i < N; ++i) {
            cin >> v[i];
        }
        int ans = 0, cnt = 0, diff = 0;
        for (int i = 0; i < N; ++i) {
            int cur = v[i], prev = i == 0 ? v[i] : v[i - 1];
            if (diff == cur - prev) {
                ++cnt;
            } else {
                cnt = 1 + (i > 0);
            }
            diff = cur - prev;
            ans = max(ans, cnt);
        }
        cout << "Case #" << tc << ": " << ans << "\n";
    }
    return 0;
}
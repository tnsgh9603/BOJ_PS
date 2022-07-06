#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T, A, B, K;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cin >> A >> B >> K;
        int ans = 0;
        for (int i = 0; i < A; ++i) {
            for (int j = 0; j < B; ++j) {
                if ((i & j) < K) {
                    ++ans;
                }
            }
        }
        cout << "Case #" << tc << ": " << ans << "\n";
    }
    return 0;
}
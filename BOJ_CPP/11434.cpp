#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n, a, b, ans = 0;
        cin >> n >> a >> b;
        for (int i = 0; i < n; ++i) {
            int p, q, r, s;
            cin >> p >> q >> r >> s;
            ans += max(p * a + r * b, q * a + s * b);
        }
        cout << "Data Set " << tc << ":\n" << ans << "\n\n";
    }
    return 0;
}

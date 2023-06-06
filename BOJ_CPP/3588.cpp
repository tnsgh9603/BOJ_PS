#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int n, s, e, ans = 0;
        cin >> n >> s >> e;
        for (int i = 0; i < n; ++i) {
            int a, b, r;
            cin >> a >> b >> r;
            if (a < s) {
                a = s;
            }
            if (b > e) {
                b = e;
            }
            if (a <= b) {
                ans += (b - a + 1) * r;
            }
        }
        cout << "Data Set " << i << ":\n" << ans << "\n\n";
    }
    return 0;
}
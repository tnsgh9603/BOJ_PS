#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int t = 1; t <= n; ++t) {
        string s1, s2;
        cin >> s1 >> s2;
        int ans = 0;
        for (int i = 0; i < s1.length(); ++i) {
            int mn = INT_MAX;
            for (int j = 0; j < s2.length(); ++j) {
                mn = min({mn, (26 + s1[i] - s2[j]) % 26, (26 + s2[j] - s1[i]) % 26});
            }
            ans += mn;
        }
        cout << "Case #" << t << ": " << ans << '\n';
    }
}
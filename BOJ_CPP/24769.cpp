#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        string ans;
        int temp = -1;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            int cnt = 0;
            for (int idx = 0; idx + 1 < s.length(); ++idx) {
                if (s[idx] == s[idx + 1] &&
                    (s[idx] == 'a' || s[idx] == 'e' || s[idx] == 'i' || s[idx] == 'o' || s[idx] == 'u' ||
                     s[idx] == 'y')) {
                    ++cnt;
                }
            }
            if (cnt > temp) {
                ans = s;
                temp = cnt;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
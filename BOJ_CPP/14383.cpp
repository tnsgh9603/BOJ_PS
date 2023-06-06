#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] != s[i - 1]) {
                ++cnt;
            }
        }
        if (s.back() == '-') {
            ++cnt;
        }
        cout << "Case #" << tc << ": " << cnt << "\n";
    }
    return 0;
}
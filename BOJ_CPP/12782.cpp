#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        string s, t;
        cin >> s >> t;
        int a = abs(count(s.begin(), s.end(), '1') - count(t.begin(), t.end(), '1')), b = 0;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] != t[j]) {
                ++b;
            }
        }
        cout << (a + b) / 2 << "\n";
    }
    return 0;
}
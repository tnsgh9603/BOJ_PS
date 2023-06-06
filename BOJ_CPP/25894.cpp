#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cout << "Test case #" << tc << ":\n";
        int p;
        cin >> p;
        map<char, char> mp;
        for (int i = 0; i < p; ++i) {
            char a, b;
            cin >> a >> b;
            mp[a] = b;
        }
        int n;
        cin >> n;
        while (n--) {
            string s;
            cin >> s;
            cout << s << " ";
            for (auto &x: s) {
                if (mp.count(x)) {
                    x = mp[x];
                }
            }
            bool flag = 1;
            for (int i = 0; i < s.length(); ++i) {
                if (s[i] == s[s.length() - 1 - i]) {
                    continue;
                }
                flag = 0;
            }
            cout << (flag ? "YES" : "NO") << "\n";
        }
        cout << "\n";
    }
    return 0;
}
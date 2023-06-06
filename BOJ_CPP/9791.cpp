#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    while (cin >> s and s != "0") {
        char c = s[0];
        int cnt = 1;
        for (int i = 1; i < s.length(); ++i) {
            if (c == s[i]) {
                ++cnt;
            } else {
                cout << cnt << c;
                c = s[i];
                cnt = 1;
            }
        }
        cout << cnt << c << "\n";
    }
    return 0;
}
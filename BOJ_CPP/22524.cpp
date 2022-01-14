#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool conv[128];

int main() {
    fastio;
    string s, s1 = "qwertasdfgzxcvb";
    for (int i = 0; i < s1.length(); ++i) {
        conv[s1[i]] = 1;
    }
    while (cin >> s && s != "#") {
        int cnt = 0;
        bool l = conv[s[0]] ? 1 : 0;
        for (int i = 1; i < s.length(); ++i) {
            if (l && !conv[s[i]] || !l && conv[s[i]]) {
                ++cnt;
                l = !l;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
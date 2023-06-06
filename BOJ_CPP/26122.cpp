#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    string s;
    cin >> n >> s;
    char c = s[0];
    int cnt = 1, mx = 0;
    for (int i = 1; i <= n; ++i) {
        if (c != s[i]) {
            string temp(cnt, (c == 'N' ? 'S' : 'N')), s1, s2;
            s1 = s.substr(max(0, i - 2 * cnt), cnt), s2 = s.substr(i, cnt);
            if (s1 == temp || s2 == temp) {
                mx = max(2 * cnt, mx);
            }
            cnt = 0;
            c = (c == 'N' ? 'S' : 'N');
        }
        ++cnt;
    }
    cout << mx;
    return 0;
}
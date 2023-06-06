#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    string s;
    cin >> n >> m >> s;
    for (int i = 1; i < n; ++i) {
        bool flag = 0;
        string str;
        cin >> str;
        for (int j = 0; j < m; ++j) {
            if (s.substr(s.length() - 1 - j) == str.substr(0, j + 1)) {
                flag = 1;
                goto hell;
            }
        }
        for (int j = 1; j < m; ++j) {
            if (s.substr(0, s.length() - j) == str.substr(j)) {
                flag = 1;
                goto hell;
            }
        }
        if (!flag) {
            cout << 0;
            return 0;
        }
        hell:;
        s = str;
    }
    cout << 1;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[12][12], s[12][12], ans[12][12];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> board[i] + 1;
    }
    for (int i = 1; i <= n; ++i) {
        cin >> s[i] + 1;
    }
    bool flag = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s[i][j] == '.') {
                ans[i][j] = '.';
            } else {
                if (board[i][j] == '*') {
                    flag = 1;
                } else {
                    int cnt = 0;
                    for (int k = 0; k < 8; ++k)
                        if (board[i + "00011222"[k] - '1'][j + "01202012"[k] - '1'] == '*') {
                            ++cnt;
                        }
                    ans[i][j] = '0' + cnt;
                }
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << (flag ? board[i][j] == '*' ? '*' : ans[i][j] == '.' ? '.' : ans[i][j] : ans[i][j]);
        }
        cout << '\n';
    }
    return 0;
}
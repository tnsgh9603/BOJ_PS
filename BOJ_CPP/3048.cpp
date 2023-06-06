#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string s[3];
char board;

int main() {
    fastio;
    int i, j, n, m, t;
    cin >> n >> m >> s[0] >> s[1] >> t;
    for (i = 0; i < n / 2; ++i, --j) {
        board = s[0][i];
        s[0][i] = s[0][n - i - 1];
        s[0][n - i - 1] = board;
    }
    for (i = 0; i < n - t; ++i) {
        cout << s[0][i];
    }
    for (j = 0; j < m && j < t - n; ++j) {
        cout << s[1][j];
    }
    for (; j < m; ++j) {
        cout << s[1][j];
        if (n > i) {
            cout << s[0][i++];
        }
    }
    for (; i < n; i++) {
        cout << s[0][i];
    }
    return 0;
}
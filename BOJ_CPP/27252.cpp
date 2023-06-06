#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[201][201];

int main() {
    fastio;
    string s;
    cin >> s;
    for (int i = 0; i < 201; ++i) {
        for (int j = 0; j < 201; ++j) {
            board[i][j] = '.';
        }
    }
    int h = 110;
    board[h][0] = (s[0] == '(' ? '/' : '\\');
    int min_h = h, max_h = h;
    for (unsigned i = 1; i < s.length(); ++i) {
        if (s[i] == '(') {
            if (s[i - 1] == '(') {
                --h;
                min_h = min(min_h, h);
            }
            board[h][i] = '/';
        } else {
            if (s[i - 1] == ')') {
                ++h;
                max_h = max(max_h, h);
            }
            board[h][i] = '\\';
        }
    }
    for (int i = min_h; i <= max_h; ++i) {
        for (int j = 0; j < s.length(); ++j) {
            cout << board[i][j];
        }
        cout << "\n";
    }
    return 0;
}
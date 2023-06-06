#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool board[2][101][101];

int main() {
    fastio;
    int n, m;
    cin >> m >> n;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                char c;
                cin >> c;
                board[i][j][k] = c - '0';
            }
        }
    }
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!board[0][i][j] and !board[1][i][j]) {
                cout << s[0];
            } else if (!board[0][i][j] and board[1][i][j]) {
                cout << s[1];
            } else if (board[0][i][j] and !board[1][i][j]) {
                cout << s[2];
            } else {
                cout << s[3];
            }
        }
        cout << "\n";
    }
    return 0;
}
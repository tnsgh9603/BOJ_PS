#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[101][101];

int main() {
    fastio;
    int n, m;
    bool flag = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> board[i][j];
        }
    }
    int x, y, l = 0;
    for (int i = 1; i <= n && !flag; ++i) {
        for (int j = 1; j <= m && !flag; ++j) {
            if (board[i][j] == '#') {
                x = i;
                y = j;
                flag = 1;
            }
        }
    }
    while (board[x][y + l] == '#') {
        ++l;
    }
    while (board[x + l][y] == '#') {
        ++l;
    }
    if (board[x][y + l / 2] == '.') {
        cout << "UP";
    } else if (board[x + l - 1][y + l / 2] == '.') {
        cout << "DOWN";
    } else if (board[x + l / 2][y] == '.') {
        cout << "LEFT";
    } else {
        cout << "RIGHT";
    }
    return 0;
}
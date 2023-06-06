#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[51][51];
int n, m;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> board[i][j];
            }
        }
        int x, y, mx = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (board[i][j] == '.') {
                    int cnt = 0;
                    for (int k = i - 1; k >= 0; --k) {
                        if (board[k][j] == '@') {
                            ++cnt;
                        } else if (board[k][j] == '#') {
                            break;
                        }
                    }
                    for (int k = i + 1; k < n; ++k) {
                        if (board[k][j] == '@') {
                            ++cnt;
                        } else if (board[k][j] == '#') {
                            break;
                        }
                    }
                    for (int k = j - 1; k >= 0; --k) {
                        if (board[i][k] == '@') {
                            ++cnt;
                        } else if (board[i][k] == '#') {
                            break;
                        }
                    }
                    for (int k = j + 1; k < m; ++k) {
                        if (board[i][k] == '@') {
                            ++cnt;
                        } else if (board[i][k] == '#') {
                            break;
                        }
                    }
                    if (mx < cnt) {
                        mx = cnt;
                        x = i;
                        y = j;
                    }
                }
            }
        }
        cout << x << ", " << y << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[201][201];
int temp[201][201], r, c, n;

bool OOB(int x, int y) {
    return 1 <= x and x <= r and 1 <= y and y <= c;
}

int main() {
    fastio;
    cin >> r >> c >> n;
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 'O') {
                for (int k = 0; k < 4; ++k) {
                    int nx = i + "0121"[k] - '1';
                    int ny = j + "1210"[k] - '1';
                    if (OOB(nx, ny)) {
                        temp[nx][ny] = 3;
                    }
                }
                temp[i][j] = 3;
            }
        }
    }
    int now = 2;
    if(n == 1) {
        goto flag;
    }
    while (1) {
        for (int i = 1; i <= r; ++i) {
            for (int j = 1; j <= c; ++j) {
                if (board[i][j] == '.') {
                    for (int k = 0; k < 4; ++k) {
                        int nx = i + "0121"[k] - '1';
                        int ny = j + "1210"[k] - '1';
                        if (OOB(nx, ny) && !temp[nx][ny]) {
                            temp[nx][ny] = now + 3;
                        }
                    }
                    temp[i][j] = now + 3;
                }
            }
        }
        fill(&board[0][0], &board[r][c + 1], 'O');
        if(now++ == n) {
            break;
        }
        for (int i = 1; i <= r; ++i) {
            for (int j = 1; j <= c; ++j) {
                if (temp[i][j] == now) {
                    board[i][j] = '.';
                    for (int k = 0; k < 4; ++k) {
                        int nx = i + "0121"[k] - '1';
                        int ny = j + "1210"[k] - '1';
                        if (OOB(nx, ny)) {
                            board[nx][ny] = '.';
                        }
                    }
                    temp[i][j] = 0;
                }
            }
        }
        if(now++ == n) {
            break;
        }
    }
    flag:;
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c; ++j) {
            cout << board[i][j];
        }
        cout << "\n";
    }
    return 0;
}
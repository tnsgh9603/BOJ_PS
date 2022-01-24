#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[4][4];

bool OOB(int x, int y) {
    return 1 <= x and x <= 3 and 1 <= y and y <= 3;
}

int main() {
    fastio;
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cin >> board[i][j];
        }
    }
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            if (board[i][j] != 9) {
                int cnt = 0;
                for (int k = 0; k < 8; ++k) {
                    int nx = i + "00122210"[k] - '1', ny = j + "122210001"[k] - '1';
                    if (OOB(nx, ny) && board[nx][ny] == 9) {
                        ++cnt;
                    }
                }
                board[i][j] = cnt;
            }
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
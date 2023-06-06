// nitromefan 님의 코드를 참고하였습니다.
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool chk(int grid[10][10], int y) {
    for (int x = 1; x < 10; ++x) {
        if (grid[x][y] != 0) {
            return 0;
        }
        for (int i = 1; i <= 4; ++i) {
            int n = 0;
            for (int j = 0; j < 10; ++j) {
                if (grid[i][j] != 0) {
                    n = grid[i][j];
                    break;
                }
            }
            for (int a0 = 0; a0 < n; ++a0) {
                int tmp = grid[i][0];
                for (int j = 0; j < 9; ++j) {
                    grid[i][j] = grid[i][j + 1];
                }
                grid[i][9] = tmp;
                if (grid[x][y] != 0) {
                    return 0;
                }
            }
        }
        for (int i = 5; i <= 8; ++i) {
            int n = 0;
            for (int j = 0; j < 10; ++j) {
                if (grid[i][j] != 0) {
                    n = grid[i][j];
                    break;
                }
            }
            for (int a0 = 0; a0 < n; ++a0) {
                int tmp = grid[i][9];
                for (int j = 8; j >= 0; --j) {
                    grid[i][j + 1] = grid[i][j];
                }
                grid[i][0] = tmp;
                if (grid[x][y] != 0) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

bool sol(int grid[10][10]) {
    for (int y = 0; y < 10; ++y) {
        int a[10][10];
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                a[i][j] = grid[i][j];
            }
        }
        if (chk(a, y)) {
            return 1;
        }
    }
    return 0;
}

int main() {
    fastio;
    string s;
    while (cin >> s) {
        int board[10][10] = {};
        for (int x = 1; x <= 8; ++x) {
            for (int y = 0; y < 10; ++y) {
                cin >> board[x][y];
            }
        }
        cout << (sol(board) ? "LEFTOVER POSSUM" : "FROGGER") << "\n";
        cin >> s;
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board1[51][51], r, c, board2[51][51], direction[51][51];
string dir1 = "0121", dir2 = "1210";

bool OOB(int x, int y) {
    return 1 <= x and x <= r and 1 <= y and y <= c;
}

void spread() {
    for (int x = 1; x <= r; ++x) {
        for (int y = 1; y <= c; ++y) {
            int cnt = 0;
            if (board1[x][y] > 0) {
                for (int k = 0; k < 4; ++k) {
                    int nx = x + dir1[k] - '1';
                    int ny = y + dir2[k] - '1';
                    if (OOB(nx, ny) && board1[nx][ny] != -1) {
                        ++cnt;
                    }
                }
                int temp = board1[x][y] / 5;
                for (int k = 0; k < 4; ++k) {
                    int nx = x + dir1[k] - '1';
                    int ny = y + dir2[k] - '1';
                    if (OOB(nx, ny) && board1[nx][ny] != -1) {
                        board2[nx][ny] += temp;
                    }
                }
                board1[x][y] -= temp * cnt;
            }
        }
    }
    for (int x = 1; x <= r; ++x) {
        for (int y = 1; y <= c; ++y) {
            board1[x][y] += board2[x][y];
            board2[x][y] = board1[x][y];
        }
    }
}

void rotate() {
    for (int x = 1; x <= r; ++x) {
        for (int y = 1; y <= c; ++y) {
            if (direction[x][y] != 5) {
                int nx = x + dir1[direction[x][y]] - '1';
                int ny = y + dir2[direction[x][y]] - '1';
                if (board1[x][y] == -1) {
                    board2[nx][ny] = 0;
                } else if (board1[nx][ny] != -1) {
                    board2[nx][ny] = board1[x][y];
                }

            } else {
                board2[x][y] = board1[x][y];
            }
        }
    }
    for (int x = 1; x <= r; ++x) {
        for (int y = 1; y <= c; ++y) {
            board1[x][y] = board2[x][y];
            board2[x][y] = 0;
        }
    }
}

int main() {
    fastio;
    int t;
    cin >> r >> c >> t;
    vector<int> v;
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c; ++j) {
            cin >> board1[i][j];
            if (board1[i][j] == -1) {
                v.push_back(i);
            }
        }
    }

    fill(&direction[0][0], &direction[50][51], 5);
    // 0 -> 상, 1 -> 우, 2 -> 하, 3 -> 좌
    int x = v[0];
    for (int i = 1; i < c; ++i) {
        direction[x][i] = 1;
    }
    for (int i = 2; i <= c; ++i) {
        direction[1][i] = 3;
    }
    for (int i = 1; i < x; ++i) {
        direction[i][1] = 2;
    }
    for (int i = 2; i <= x; ++i) {
        direction[i][c] = 0;
    }

    for (int i = 1; i < c; ++i) {
        direction[x + 1][i] = 1;
    }
    for (int i = x + 1; i < r; ++i) {
        direction[i][c] = 2;
    }
    for (int i = 2; i <= c; ++i) {
        direction[r][i] = 3;
    }
    for (int i = x + 2; i <= r; ++i) {
        direction[i][1] = 0;
    }

    for (int tc = 0; tc < t; ++tc) {
        spread();
        rotate();
    }

    int sum = 0;
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c; ++j) {
            if (board1[i][j] != -1) {
                sum += board1[i][j];
            }
        }
    }
    cout << sum;
    return 0;
}
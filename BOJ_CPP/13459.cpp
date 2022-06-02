#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[11][11];
bool visited[11][11][11][11];
int n, m;

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= m;
}

int main() {
    fastio;
    cin >> n >> m;
    int R_X, R_Y, B_X, B_Y;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 'R') {
                R_X = i;
                R_Y = j;
                board[i][j] = '.';
            } else if (board[i][j] == 'B') {
                B_X = i;
                B_Y = j;
                board[i][j] = '.';
            }
        }
    }
    queue<tuple<int, int, int, int, int>> q;
    q.push({R_X, R_Y, B_X, B_Y, 0});
    visited[R_X][R_Y][B_X][B_Y] = 1;
    while (!q.empty()) {
        auto[x1, y1, x2, y2, cnt] = q.front();
        q.pop();
        if (cnt == 10) {
            continue;
        }
        for (int i = 0; i < 4; ++i) {
            // 빨간 구슬
            int nx1 = x1;
            int ny1 = y1;
            // 파란 구슬
            int nx2 = x2;
            int ny2 = y2;
            // 위로 기울이기
            if (i == 0) {
                if (nx1 < nx2) {
                    while (OOB(nx1 - 1, ny1) and board[nx1 - 1][ny1] == '.' and !(nx1 - 1 == nx2 and ny1 == ny2)) {
                        --nx1;
                    }
                    while (OOB(nx2 - 1, ny2) and board[nx2 - 1][ny2] == '.' and !(nx1 == nx2 - 1 and ny1 == ny2)) {
                        --nx2;
                    }
                } else {
                    while (OOB(nx2 - 1, ny2) and board[nx2 - 1][ny2] == '.' and !(nx1 == nx2 - 1 and ny1 == ny2)) {
                        --nx2;
                    }
                    while (OOB(nx1 - 1, ny1) and board[nx1 - 1][ny1] == '.' and !(nx1 - 1 == nx2 and ny1 == ny2)) {
                        --nx1;
                    }
                }
                if (board[nx1 - 1][ny1] == 'O') {
                    while (OOB(nx2 - 1, ny2) and (board[nx2 - 1][ny2] == 'R' or board[nx2 - 1][ny2] == '.')) {
                        --nx2;
                    }
                    if (board[nx2 - 1][ny2] == 'O') {
                        continue;
                    }
                    cout << 1;
                    return 0;
                }
                if (board[nx2 - 1][ny2] == 'O') {
                    continue;
                }
                if (!visited[nx1][ny1][nx2][ny2]) {
                    visited[nx1][ny1][nx2][ny2] = 1;
                    q.push({nx1, ny1, nx2, ny2, cnt + 1});
                }
            }
                // 오른쪽으로 기울이기
            else if (i == 1) {
                if (ny1 > ny2) {
                    while (OOB(nx1, ny1 + 1) and board[nx1][ny1 + 1] == '.' and !(nx1 == nx2 and ny1 + 1 == ny2)) {
                        ++ny1;
                    }
                    while (OOB(nx2, ny2 + 1) and board[nx2][ny2 + 1] == '.' and !(nx1 == nx2 and ny1 == ny2 + 1)) {
                        ++ny2;
                    }
                } else {
                    while (OOB(nx2, ny2 + 1) and board[nx2][ny2 + 1] == '.' and !(nx1 == nx2 and ny1 == ny2 + 1)) {
                        ++ny2;
                    }
                    while (OOB(nx1, ny1 + 1) and board[nx1][ny1 + 1] == '.' and !(nx1 == nx2 and ny1 + 1 == ny2)) {
                        ++ny1;
                    }
                }
                if (board[nx1][ny1 + 1] == 'O') {
                    while (OOB(nx2, ny2 + 1) and (board[nx2][ny2 + 1] == 'R' or board[nx2][ny2 + 1] == '.')) {
                        ++ny2;
                    }
                    if (board[nx2][ny2 + 1] == 'O') {
                        continue;
                    }
                    cout << 1;
                    return 0;
                }
                if (board[nx2][ny2 + 1] == 'O') {
                    continue;
                }
                if (!visited[nx1][ny1][nx2][ny2]) {
                    visited[nx1][ny1][nx2][ny2] = 1;
                    q.push({nx1, ny1, nx2, ny2, cnt + 1});
                }
            }
                // 아래로 기울이기
            else if (i == 2) {
                if (nx1 > nx2) {
                    while (OOB(nx1 + 1, ny1) and board[nx1 + 1][ny1] == '.' and !(nx1 + 1 == nx2 and ny1 == ny2)) {
                        ++nx1;
                    }
                    while (OOB(nx2 + 1, ny2) and board[nx2 + 1][ny2] == '.' and !(nx1 == nx2 + 1 and ny1 == ny2)) {
                        ++nx2;
                    }
                } else {
                    while (OOB(nx2 + 1, ny2) and board[nx2 + 1][ny2] == '.' and !(nx1 == nx2 + 1 and ny1 == ny2)) {
                        ++nx2;
                    }
                    while (OOB(nx1 + 1, ny1) and board[nx1 + 1][ny1] == '.' and !(nx1 + 1 == nx2 and ny1 == ny2)) {
                        ++nx1;
                    }
                }
                if (board[nx1 + 1][ny1] == 'O') {
                    while (OOB(nx2 + 1, ny2) and (board[nx2 + 1][ny2] == 'R' or board[nx2 + 1][ny2] == '.')) {
                        ++nx2;
                    }
                    if (board[nx2 + 1][ny2] == 'O') {
                        continue;
                    }
                    cout << 1;
                    return 0;
                }
                if (board[nx2 + 1][ny2] == 'O') {
                    continue;
                }
                if (!visited[nx1][ny1][nx2][ny2]) {
                    visited[nx1][ny1][nx2][ny2] = 1;
                    q.push({nx1, ny1, nx2, ny2, cnt + 1});
                }
            }
                // 왼쪽로 기울이기
            else {
                if (ny1 < ny2) {
                    while (OOB(nx1, ny1 - 1) and board[nx1][ny1 - 1] == '.' and !(nx1 == nx2 and ny1 - 1 == ny2)) {
                        --ny1;
                    }
                    while (OOB(nx2, ny2 - 1) and board[nx2][ny2 - 1] == '.' and !(nx1 == nx2 and ny1 == ny2 - 1)) {
                        --ny2;
                    }
                } else {
                    while (OOB(nx2, ny2 - 1) and board[nx2][ny2 - 1] == '.' and !(nx1 == nx2 and ny1 == ny2 - 1)) {
                        --ny2;
                    }
                    while (OOB(nx1, ny1 - 1) and board[nx1][ny1 - 1] == '.' and !(nx1 == nx2 and ny1 - 1 == ny2)) {
                        --ny1;
                    }
                }
                if (board[nx1][ny1 - 1] == 'O') {
                    while (OOB(nx2, ny2 - 1) and (board[nx2][ny2 - 1] == 'R' or board[nx2][ny2 - 1] == '.')) {
                        --ny2;
                    }
                    if (board[nx2][ny2 - 1] == 'O') {
                        continue;
                    }
                    cout << 1;
                    return 0;
                }
                if (board[nx2][ny2 - 1] == 'O') {
                    continue;
                }
                if (!visited[nx1][ny1][nx2][ny2]) {
                    visited[nx1][ny1][nx2][ny2] = 1;
                    q.push({nx1, ny1, nx2, ny2, cnt + 1});
                }
            }
        }
    }
    cout << 0;
    return 0;
}
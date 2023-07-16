#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[601][601];
bool visited1[601][601];
int n, m;

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= m;
}

int main() {
    fastio;
    cin >> n >> m;
    int st_x, st_y;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 'I') {
                st_x = i;
                st_y = j;
            }
        }
    }
    queue<pair<int, int>> q;
    q.push({st_x, st_y});
    visited1[st_x][st_y] = 1;
    int cnt = 0;
    while (!q.empty()) {
        auto[x, y] = q.front();
        q.pop();
        if (board[x][y] == 'P') {
            ++cnt;
        }
        for (int i = 0; i < 4; ++i) {
            int nx = x + "0121"[i] - '1';
            int ny = y + "1210"[i] - '1';
            if (OOB(nx, ny) and !visited1[nx][ny] and board[nx][ny] != 'X') {
                q.push({nx, ny});
                visited1[nx][ny] = 1;
            }
        }
    }
    cout << (cnt ? to_string(cnt) : "TT");
    return 0;
}
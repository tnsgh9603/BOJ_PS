#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[1001][1001], dp[1001][1001], n, m;
bool visited[1001][1001];

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
            if (board[i][j] == 2) {
                st_x = i;
                st_y = j;
            } else if (board[i][j] == 0) {
                visited[i][j] = 1;
            }
        }
    }
    queue<tuple<int, int, int>> q;
    q.push({st_x, st_y, 0});
    visited[st_x][st_y] = 1;
    while (!q.empty()) {
        auto[x, y, cnt] = q.front();
        q.pop();
        dp[x][y] = cnt;
        for (int i = 0; i < 4; ++i) {
            int nx = x + "0121"[i] - '1';
            int ny = y + "1210"[i] - '1';
            if (OOB(nx, ny) and !visited[nx][ny]) {
                q.push({nx, ny, cnt + 1});
                visited[nx][ny] = 1;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (board[i][j] == 1 and dp[i][j] == 0) {
                cout << "-1 ";
            } else {
                cout << dp[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
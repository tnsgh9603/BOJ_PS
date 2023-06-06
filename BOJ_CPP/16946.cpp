#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, m;
char board[1001][1001], ans[1001][1001];
bool visited[1001][1001];

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= m and board[x][y] == '0';
}

int main() {
    fastio;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> board[i][j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (board[i][j] == '1') {
                memset(visited, 0, sizeof(visited));
                queue<pair<int, int>> q;
                q.push({i, j});
                visited[i][j] = 1;
                int cnt = 0;
                while (!q.empty()) {
                    auto[x, y] = q.front();
                    q.pop();
                    ++cnt;
                    for (int k = 0; k < 4; ++k) {
                        int nx = x + "0121"[k] - '1';
                        int ny = y + "1210"[k] - '1';
                        if (OOB(nx, ny) && !visited[nx][ny]) {
                            visited[nx][ny] = 1;
                            q.push({nx, ny});
                        }
                    }
                }
                cout << cnt % 10;
            }
            else {
                cout << board[i][j];
            }
        }
        cout << "\n";
    }
    return 0;
}
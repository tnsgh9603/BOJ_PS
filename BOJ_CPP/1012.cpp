#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool board[51][51], visited1[51][51];
int n, m, k;

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= m;
}

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        cin >> n >> m >> k;
        memset(board, 0, sizeof(board));
        memset(visited1, 0, sizeof(visited1));
        while (k--) {
            int a, b;
            cin >> a >> b;
            board[a + 1][b + 1] = 1;
        }
        int cnt = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (board[i][j] and !visited1[i][j]) {
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    ++cnt;
                    visited1[i][j] = 1;
                    while (!q.empty()) {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        for (int k = 0; k < 4; ++k) {
                            int nx = x + "0121"[k] - '1';
                            int ny = y + "1210"[k] - '1';
                            if (OOB(nx, ny) and board[nx][ny] and !visited1[nx][ny]) {
                                q.push({nx, ny});
                                visited1[nx][ny] = 1;
                            }
                        }
                    }
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
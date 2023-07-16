#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[101][101], n;
bool temp[101][101], visited1[101][101];

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= n;
}

int main() {
    fastio;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> board[i][j];
        }
    }
    int mx = 0;
    for (int k = 1; k <= 100; ++k) {
        memset(temp, 0, sizeof(temp));
        memset(visited1, 0, sizeof(visited1));
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (board[i][j] >= k) {
                    temp[i][j] = 1;
                }
            }
        }
        int cnt = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (temp[i][j] and !visited1[i][j]) {
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    visited1[i][j] = 1;
                    ++cnt;
                    while (!q.empty()) {
                        auto[x, y] = q.front();
                        q.pop();
                        for (int w = 0; w < 4; ++w) {
                            int nx = x + "0121"[w] - '1';
                            int ny = y + "1210"[w] - '1';
                            if (OOB(nx, ny) and !visited1[nx][ny] and temp[nx][ny]) {
                                visited1[nx][ny] = 1;
                                q.push({nx, ny});
                            }
                        }
                    }
                }
            }
        }
        mx = max(mx, cnt);
    }
    cout << mx;
    return 0;
}
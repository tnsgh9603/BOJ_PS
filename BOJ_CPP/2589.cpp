#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
char board[51][51];
int n, m;
bool is_prime[51][51];

bool OOB(int x, int y) {
    return 1 <= x && x <= n && 1 <= y && y <= m && board[x][y] == 'L';
}

int main() {
    fastio;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> board[i][j];
        }
    }
    int mx = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (board[i][j] == 'L') {
                queue<tuple<int, int, int>> q;
                q.push({i, j, 0});
                memset(is_prime, 0, sizeof(is_prime));
                is_prime[i][j] = 1;
                while (!q.empty()) {
                    auto[x, y, cnt] = q.front();
                    q.pop();
                    mx = max(mx, cnt);
                    for (int k = 0; k < 4; ++k) {
                        int nx = x + "0121"[k] - '1';
                        int ny = y + "1210"[k] - '1';
                        if (OOB(nx, ny) && !is_prime[nx][ny]) {
                            q.push({nx, ny, cnt + 1});
                            is_prime[nx][ny] = 1;
                        }
                    }
                }
            }
        }
    }
    cout << mx;
    return 0;
}
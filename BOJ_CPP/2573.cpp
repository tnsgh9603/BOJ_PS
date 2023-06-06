#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[301][301], temp[301][301], n, m;
bool is_prime[301][301];

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= m;
}

int main() {
    fastio;
    int iceberg = 0, ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> board[i][j];
            if (board[i][j]) {
                ++iceberg;
            }
        }
    }
    while (iceberg) {
        for (int x = 1; x <= n; ++x) {
            for (int y = 1; y <= m; ++y) {
                if (board[x][y]) {
                    int cnt = 0;
                    for (int i = 0; i < 4; ++i) {
                        int nx = x + "0121"[i] - '1';
                        int ny = y + "1210"[i] - '1';
                        if (OOB(nx, ny) and !board[nx][ny]) {
                            ++cnt;
                        }
                    }
                    temp[x][y] = cnt;
                }
            }
        }
        int cnt = 0;
        memset(is_prime, 0, sizeof(is_prime));
        for (int x = 1; x <= n; ++x) {
            for (int y = 1; y <= m; ++y) {
                if (board[x][y] && !is_prime[x][y]) {
                    queue<pair<int, int>> q;
                    q.push({x, y});
                    is_prime[x][y] = 1;
                    ++cnt;
                    while (!q.empty()) {
                        auto[x, y] = q.front();
                        q.pop();
                        for (int i = 0; i < 4; ++i) {
                            int nx = x + "0121"[i] - '1';
                            int ny = y + "1210"[i] - '1';
                            if (OOB(nx, ny) and board[nx][ny] and !is_prime[nx][ny]) {
                                q.push({nx, ny});
                                is_prime[nx][ny] = 1;
                            }
                        }
                    }
                }
            }
        }
        if(cnt >= 2) {
            cout << ans;
            return 0;
        }
        ++ans;
        for (int x = 1; x <= n; ++x) {
            for (int y = 1; y <= m; ++y) {
                if (board[x][y]) {
                    board[x][y] = max(0, board[x][y] - temp[x][y]);
                    if (!board[x][y]) {
                        --iceberg;
                    }
                }
            }
        }
    }
    cout << 0;
    return 0;
}
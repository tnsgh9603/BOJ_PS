#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool board[101][101], is_prime[101][101];
int n, m, cnt = 0;

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= m;
}

int main() {
    fastio;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> board[i][j];
            if (board[i][j]) {
                ++cnt;
            }
        }
    }
    int prev, time = 0;
    while (cnt) {
        ++time;
        prev = cnt;
        memset(is_prime, 0, sizeof(is_prime));
        queue<pair<int, int>> q;
        is_prime[1][1] = 1;
        q.push({1, 1});
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if (!board[x][y]) {
                for (int i = 0; i < 4; ++i) {
                    int nx = x + "0121"[i] - '1';
                    int ny = y + "1210"[i] - '1';
                    if (OOB(nx, ny) and !is_prime[nx][ny]) {
                        if (board[nx][ny]) {
                            board[nx][ny] = 0;
                            --cnt;
                        } else {
                            q.push({nx, ny});
                        }
                        is_prime[nx][ny] = 1;
                    }
                }
            }
        }

    }
    cout << time << "\n" << prev;
    return 0;
}
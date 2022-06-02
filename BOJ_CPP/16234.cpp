#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;

int n, board[51][51];
bool is_prime[51][51];

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= n;
}

int main() {
    fastio;
    int l, r;
    cin >> n >> l >> r;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> board[i][j];
        }
    }
    int ans = 0;
    while (1) {
        bool flag1 = 1;
        vector<pair<int, int>> v[51][51];
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                for (int k = 0; k < 4; ++k) {
                    int nx = i + "0121"[k] - '1';
                    int ny = j + "1210"[k] - '1';
                    int diff = board[nx][ny] - board[i][j];
                    if (OOB(nx, ny) && l <= diff && diff <= r) {
                        flag1 = 0;
                        v[i][j].push_back({nx, ny});
                        v[nx][ny].push_back({i, j});
                    }
                }
            }
        }
        if (flag1) {
            break;
        }
        memset(is_prime, 0, sizeof(is_prime));
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (!is_prime[i][j]) {
                    is_prime[i][j] = 1;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    int sum = 0, cnt = 0;
                    vector<pair<int, int>> temp;
                    while (!q.empty()) {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        temp.push_back({x, y});
                        sum += board[x][y];
                        ++cnt;
                        for (int j = 0; j < v[x][y].size(); ++j) {
                            int nx = v[x][y][j].first;
                            int ny = v[x][y][j].second;
                            if (!is_prime[nx][ny]) {
                                is_prime[nx][ny] = 1;
                                q.push({nx, ny});
                            }
                        }
                    }
                    for (int j = 0; j < temp.size(); ++j) {
                        board[temp[j].first][temp[j].second] = sum / cnt;
                    }
                }
            }
        }
        ++ans;
    }
    cout << ans;
    return 0;
}
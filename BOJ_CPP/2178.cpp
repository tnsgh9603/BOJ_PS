#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool board[101][101], visited1[101][101];
int n, m;

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= m;
}

int main() {
    fastio;
    cin >> n >> m;
    char c;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> c;
            board[i][j] = (c == '1' ? 1 : 0);
        }
    }
    queue<tuple<int, int, int>> q;
    q.push({1, 1, 1});
    visited1[1][1] = 1;
    while (!q.empty()) {
        auto[x, y, cnt] = q.front();
        q.pop();
        if (x == n and y == m) {
            cout << cnt;
            return 0;
        }
        for (int i = 0; i < 4; ++i) {
            int nx = x + "0121"[i] - '1';
            int ny = y + "1210"[i] - '1';
            if (OOB(nx, ny) and !visited1[nx][ny] and board[nx][ny]) {
                q.push({nx, ny, cnt + 1});
                visited1[nx][ny] = 1;
            }
        }
    }
    return 0;
}
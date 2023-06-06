#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[21][21];
bool visited[21][21], alphabet[26];
int n, m, mx;

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= m;
}

void dfs(int x, int y, int cnt) {
    bool flag = 0;
    for (int i = 0; i < 4; ++i) {
        int nx = x + "0121"[i] - '1';
        int ny = y + "1210"[i] - '1';
        if (OOB(nx, ny) and !visited[nx][ny] and !alphabet[board[nx][ny] - 'A']) {
            visited[nx][ny] = 1;
            alphabet[board[nx][ny] - 'A'] = 1;
            flag = 1;
            dfs(nx, ny, cnt + 1);
            visited[nx][ny] = 0;
            alphabet[board[nx][ny] - 'A'] = 0;
        }
    }
    if (!flag) {
        mx = max(mx, cnt);
    }
}

int main() {
    fastio;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> board[i][j];
        }
    }
    alphabet[board[1][1] - 'A'] = 1;
    visited[1][1] = 1;
    dfs(1, 1, 1);
    cout << mx;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

char board[51][51];
int n, m;

bool OOB(int r, int c) {
    return 0 <= r && r < n && 0 <= c && c < m;
}

int dr[2][6] = {{-1, -1, 0, 0, 1, 1},
                {-1, -1, 0, 0, 1, 1}}, dc[2][6] = {{-1, 0, -1, 1, -1, 0},
                                                   {0,  1, -1, 1, 0,  1}};

int process(int r, int c) {
    int cnt = 0;
    for (int i = 0; i < 6; ++i) {
        int nr = r + dr[r % 2][i], nc = c + dc[r % 2][i];
        if (OOB(nr, nc) && board[r][c] != board[nr][nc]) {
            ++cnt;
        }
    }
    return cnt;
}

int main() {
    fastio;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }
    int res = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            res += process(i, j);
        }
    }
    cout << res / 2;
    return 0;
}
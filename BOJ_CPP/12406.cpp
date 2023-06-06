#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

char board[31][31];
int sx, sy;

int f(int i, int j, int dx, int dy) {
    int nowx, nowy, di, dj;
    nowx = sx;
    nowy = sy;
    di = dj = 0;
    for (; di < i + i || dj < j + j;) {
        if (di != 0 || dj != 0) {
            if (di * j == dj * i && nowx == sx && nowy == sy) {
                return 0;
            }
        }
        if ((di + 1) * j > (dj + 1) * i) {
            if (board[nowx][nowy + dy] == '#') {
                dy = -dy;
            } else {
                nowy += dy;
            }
            dj += 2;
        } else if ((di + 1) * j < (dj + 1) * i) {
            if (board[nowx + dx][nowy] == '#') {
                dx = -dx;
            } else {
                nowx += dx;
            }
            di += 2;
        } else {
            if (board[nowx + dx][nowy + dy] == '#') {
                if (board[nowx + dx][nowy] == '#') {
                    if (board[nowx][nowy + dy] == '#') {
                        dx = -dx;
                        dy = -dy;
                    } else {
                        dx = -dx;
                        nowy += dy;
                    }
                } else {
                    if (board[nowx][nowy + dy] == '#') {
                        nowx += dx;
                        dy = -dy;
                    } else {
                        return 0;
                    }
                }
            } else {
                nowx += dx, nowy += dy;
            }
            di += 2;
            dj += 2;
        }
    }
    if (nowx == sx && nowy == sy) {
        return 1;
    }
    return 0;
}

int main() {
    fastio;
    int tc;
    cin >> tc;
    for (int T = 1; T <= tc; ++T) {
        int n, m, d;
        cin >> n >> m >> d;
        int ans = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cin >> board[i][j];
                if (board[i][j] == 'X') {
                    sx = i, sy = j;
                }
            }
        }
        for (int i = 0; i <= d; ++i) {
            for (int j = 0; j <= d; ++j) {
                if (i == 0 && j == 0) {
                    continue;
                }
                if (i * i + j * j > d * d) {
                    continue;
                }
                if (f(i, j, 1, 1)) {
                    ++ans;
                }
                if (i != 0 && f(i, j, -1, 1)) {
                    ++ans;
                }
                if (j != 0 && f(i, j, 1, -1)) {
                    ++ans;
                }
                if (i != 0 && j != 0 && f(i, j, -1, -1)) {
                    ++ans;
                }
            }
        }
        cout << "Case #" << T << ": " << ans << "\n";
    }
    return 0;
}

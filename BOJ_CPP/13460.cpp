#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, m, rx, ry, bx, by, ans = 11;
char a[11][11];

void go(int rx, int ry, int bx, int by, int mx, int my, int cnt) {
    if (cnt >= ans) {
        return;
    }
    int rm = 0, bm = 0;
    if (mx != my) {
        while (a[bx + mx][by + my] - '#') {
            bx += mx;
            by += my;
            ++bm;
            if (!(a[bx][by] - 'O')) {
                return;
            }
        }
        while (a[rx + mx][ry + my] - '#') {
            rx += mx;
            ry += my;
            ++rm;
            if (!(a[rx][ry] - 'O')) {
                ans = (ans < cnt ? ans : cnt);
                return;
            }
        }
    }
    if (rx == bx && ry == by) {
        if (rm < bm) {
            bx -= mx;
            by -= my;
        } else {
            rx -= mx;
            ry -= my;
        }
    }
    if (mx == 0) {
        go(rx, ry, bx, by, 1, 0, cnt + 1);
        go(rx, ry, bx, by, -1, 0, cnt + 1);
    }
    if (my == 0) {
        go(rx, ry, bx, by, 0, 1, cnt + 1);
        go(rx, ry, bx, by, 0, -1, cnt + 1);
    }
}

int main() {
    fastio;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < m - 1; ++j) {
            if (a[i][j] == 'R') {
                rx = i;
                ry = j;
            }
            if (a[i][j] == 'B') {
                bx = i;
                by = j;
            }
        }
    }
    go(rx, ry, bx, by, 0, 0, 0);
    cout << (ans < 11 ? ans : -1);
    return 0;
}
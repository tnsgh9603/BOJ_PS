#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
struct pos {
    int rx, ry, bx, by, cnt = 0;
};
int n, m, x[] = {1, -1, 0, 0}, y[] = {0, 0, 1, -1}, v[10][10][10][10];
char mp[10][10];
queue<pos> q;

int main() {
    fastio;
    cin >> n >> m;
    q.push(pos{});
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mp[i][j];
            if (mp[i][j] == 'R') {
                q.front().rx = j;
                q.front().ry = i;
                mp[i][j] = '.';
            }
            if (mp[i][j] == 'B') {
                q.front().bx = j;
                q.front().by = i;
                mp[i][j] = '.';
            }
        }
    }
    while (!q.empty()) {
        pos cur = q.front();
        v[cur.ry][cur.rx][cur.by][cur.bx] = 1;
        q.pop();
        for (int p = 0; p < 4; ++p) {
            int rx = cur.rx, ry = cur.ry, bx = cur.bx, by = cur.by, cnt = cur.cnt + 1, c = 0;
            while (mp[ry][rx] == '.') {
                ry += y[p];
                rx += x[p];
                ++c;
            }
            while (mp[by][bx] == '.') {
                by += y[p];
                bx += x[p];
                --c;
            }
            if (mp[by][bx] == 'O') {
                continue;
            }
            if (mp[ry][rx] == 'O') {
                cout << cnt;
                return 0;
            }
            ry -= y[p];
            rx -= x[p];
            by -= y[p];
            bx -= x[p];
            if (rx == bx && ry == by) {
                if (c > 0) {
                    ry -= y[p], rx -= x[p];
                } else {
                    by -= y[p];
                    bx -= x[p];
                }
            }
            if (!v[ry][rx][by][bx]) {
                q.push({rx, ry, bx, by, cnt});
            }
        }
    }
    cout << -1;
    return 0;
}
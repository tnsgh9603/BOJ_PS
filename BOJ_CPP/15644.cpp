#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string str[11], c, v[4] = {"U", "D", "L", "R"};
int ans = 11, dr[4] = {-1, 1, 0, 0}, dc[4] = {0, 0, -1, 1};

void dfs(int rR, int rC, int bR, int bC, int dir, int cnt, string com) {
    if (cnt >= ans) {
        return;
    }
    int mR = 0, mB = 0;
    while (1) {
        ++mB;
        bR += dr[dir];
        bC += dc[dir];
        if (str[bR][bC] == 'O') {
            return;
        } else if (str[bR][bC] == '#') {
            bR -= dr[dir];
            bC -= dc[dir];
            break;
        }
    }
    while (1) {
        ++mR;
        rR += dr[dir];
        rC += dc[dir];
        if (str[rR][rC] == 'O') {
            if (ans > cnt) {
                ans = cnt;
                c = com;
            }
            return;
        } else if (str[rR][rC] == '#') {
            rR -= dr[dir];
            rC -= dc[dir];
            break;
        }
    }
    if (rR == bR && rC == bC) {
        if (mB > mR) {
            bR -= dr[dir];
            bC -= dc[dir];
        } else {
            rR -= dr[dir];
            rC -= dc[dir];
        }
    }
    for (int i = 0; i < 4; ++i) {
        dfs(rR, rC, bR, bC, i, cnt + 1, com + v[i]);
    }
}

int main() {
    fastio;
    int rR, rC, bR, bC, n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> str[i];
        for (int j = 0; j < m; ++j) {
            if (str[i][j] == 'R') {
                rR = i;
                rC = j;
            } else if (str[i][j] == 'B') {
                bR = i;
                bC = j;
            }
        }
    }
    for (int i = 0; i < 4; ++i) {
        dfs(rR, rC, bR, bC, i, 1, v[i]);
    }
    if (ans == 11) {
        cout << -1;
    } else {
        cout << ans << "\n" << c;
    }
    return 0;
}
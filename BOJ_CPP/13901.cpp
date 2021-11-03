#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int d[4];
bool visited[1001][1001];

int main() {
    fastio;
    int R, C, t, x, y;
    cin >> R >> C >> t;
    for (int i = 0; i < t + 1; ++i) {
        cin >> x >> y;
        visited[x][y] = 1;
    }
    for (int i = 0; i < 4; ++i) {
        cin >> d[i];
        --d[i];
    }
    t = 0;
    int ch = 0;
    while (1) {
        x += "0211"[d[t]] - '1';
        y += "1102"[d[t]] - '1';
        if (x < 0 || y < 0 || x >= R || y >= C || visited[x][y]) {
            x -= "0211"[d[t]] - '1';
            y -= "1102"[d[t]] - '1';
            t = (t + 1) % 4;
            ++ch;
        } else {
            ch = 0;
            visited[x][y] = 1;
        }
        if (ch == 4) {
            break;
        }
    }
    cout << x << " " << y;
    return 0;
}
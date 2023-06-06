#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int M, n, x, y, dir, w;
    string cmd;
    x = y = dir = 0;
    cin >> M >> n;
    for (int i = 0; i < n; ++i) {
        cin >> cmd >> w;
        if (cmd == "TURN") {
            w == 0 ? --dir : ++dir;
        } else {
            dir = (dir + 4) % 4;
            x += ("2101"[dir] - '1') * w;
            y += ("2101"[(dir + 1) % 4] - '1') * w;
        }
        if (x < 0 || x > M || y < 0 || y > M) {
            cout << -1;
            return 0;
        }
    }
    cout << x << " " << y;
    return 0;
}
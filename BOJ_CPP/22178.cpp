#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[101][101];

int main() {
    fastio;
    int w, h;
    cin >> w >> h;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin >> board[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            for (int k = 0; k < 2; ++k) {
                int x = i + "01"[k] - '1', y = j + "10"[k] - '1';
                if (x >= 0 && y >= 0) {
                    cnt += (board[i][j] != board[x][y]);
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
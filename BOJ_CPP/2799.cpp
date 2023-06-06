#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int cnt[5];
char board[5][501];

int main() {
    fastio;
    int R, C;
    cin >> R >> C;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> board[j];
        }
        for (int j = 0; j < C; ++j) {
            int k = 0;
            while (k < 4 && board[k + 1][j * 5 + 1] == '*') {
                ++k;
            }
            ++cnt[k];
        }
    }
    for (int i = 0; i < 5; ++i) {
        cout << cnt[i] << " ";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[101][101][101];
bool is_prime[101];

int main() {
    fastio;
    int h, w, n;
    cin >> h >> w >> n;
    for (int i = 0; i <= n; ++i) {
        for (int j = 1; j <= h; ++j) {
            for (int k = 1; k <= w; ++k) {
                cin >> board[i][j][k];
            }
        }
    }
    for (int j = 1; j <= h; ++j) {
        for (int k = 1; k <= w; ++k) {
            if (board[n][j][k] == 'x') {
                for (int i = n - 1; i >= 0; --i) {
                    if (!is_prime[i] && board[n][j][k] != board[i][j][k]) {
                        is_prime[i] = 1;
                    }
                }
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (!is_prime[i]) {
            ++cnt;
        }
    }
    cout << (cnt == 1 ? "yes" : "no");
    return 0;
}
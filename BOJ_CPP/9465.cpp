#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[3][100'001], mn[3][100'001];

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        for (int i = 1; i <= 2; ++i) {
            for (int j = 1; j <= n; ++j) {
                cin >> board[i][j];
            }
        }
        memset(mn, 0, sizeof(mn));
        mn[1][1] = board[1][1];
        mn[2][1] = board[2][1];
        for (int i = 1; i <= 2; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (j - 1 >= 1) {
                    mn[2][j] = max(mn[2][j], mn[1][j - 1] + board[2][j]);
                    mn[1][j] = max(mn[1][j], mn[2][j - 1] + board[1][j]);
                }
                if (j - 2 >= 1) {
                    mn[2][j] = max(mn[2][j], mn[1][j - 2] + board[2][j]);
                    mn[1][j] = max(mn[1][j], mn[2][j - 2] + board[1][j]);
                }
            }
        }
        cout << max(mn[1][n], mn[2][n]) << "\n";
    }
    return 0;
}
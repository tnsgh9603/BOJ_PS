#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[1001][1001];

int main() {
    fastio;
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i == 1) {
                board[i][j] = j;
            } else {
                board[i][j] = board[i - 1][j] + 1;
            }
        }
    }
    if (board[n][m] <= k) {
        cout << "YES\n";
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "NO";
    }
    return 0;
}
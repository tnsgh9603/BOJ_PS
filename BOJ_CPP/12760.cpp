#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[101], board[101][101];

int main() {
    fastio;
    int n, m, mx1 = 0, mx2, i;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
        sort(board[i], board[i] + m);
    }
    for (int i = m - 1; i >= 0; --i) {
        mx2 = 0;
        for (int j = 0; j < n; ++j) {
            mx2 = max(mx2, board[j][i]);
        }
        for (int j = 0; j < n; ++j) {
            if (board[j][i] == mx2) {
                ++arr[j];
            }
            mx1 = max(mx1, arr[j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        if (mx1 == arr[i]) {
            cout << i + 1 << " ";
        }
    }
    return 0;
}
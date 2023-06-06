#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[1001][1001];

int main() {
    fastio;
    int n;
    cin >> n;
    vector<bool> row(n), col(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> board[i][j];
        }
        for (int j = 0; j < n; ++j) {
            if (board[i][j] == 'W') {
                row[i] = col[j] = 1;
            }
        }
    }
    for (int i = 0, j = 0; i < n; ++i) {
        if (!row[i]) {
            while (j < n && col[j]) {
                ++j;
            }
            board[i][j] = 'W';
            col[j] = row[i] = 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << board[i][j];
        }
        cout << "\n";
    }
    return 0;
}
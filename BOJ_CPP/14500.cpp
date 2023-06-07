#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, m, board[501][501];

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= m;
}

int main() {
    fastio;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> board[i][j];
        }
    }
    // 정사각형
    int mx = 0;
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            int sum = board[i][j] + board[i + 1][j] + board[i][j + 1] + board[i + 1][j + 1];
            mx = max(mx, sum);
        }
    }
    // 긴 막대기(세로로 길게)
    for (int i = 1; i <= n - 3; ++i) {
        for (int j = 1; j <= m; ++j) {
            int sum = board[i][j] + board[i + 1][j] + board[i + 2][j] + board[i + 3][j];
            mx = max(mx, sum);
        }
    }
    // 긴 막대기(가로로 길게)
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m - 3; ++j) {
            int sum = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i][j + 3];
            mx = max(mx, sum);
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            // ㅓ
            if (OOB(i, j) and OOB(i + 1, j) and OOB(i + 1, j - 1) and OOB(i + 2, j)) {
                int sum = board[i][j] + board[i + 1][j] + board[i + 1][j - 1] + board[i + 2][j];
                mx = max(mx, sum);
            }
            // ㅏ
            if (OOB(i, j) and OOB(i + 1, j) and OOB(i + 1, j + 1) and OOB(i + 2, j)) {
                int sum = board[i][j] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 2][j];
                mx = max(mx, sum);
            }
            // ㅜ
            if (OOB(i, j) and OOB(i, j + 1) and OOB(i, j + 2) and OOB(i + 1, j + 1)) {
                int sum = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i + 1][j + 1];
                mx = max(mx, sum);
            }
            // ㅗ
            if (OOB(i, j) and OOB(i, j + 1) and OOB(i, j + 2) and OOB(i - 1, j + 1)) {
                int sum = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i - 1][j + 1];
                mx = max(mx, sum);
            }
            // ㄱ
            if (OOB(i, j) and OOB(i, j + 1) and OOB(i, j + 2) and OOB(i + 1, j + 2)) {
                int sum = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i + 1][j + 2];
                mx = max(mx, sum);
            }
            if (OOB(i, j) and OOB(i, j + 1) and OOB(i + 1, j + 1) and OOB(i + 2, j + 1)) {
                int sum = board[i][j] + board[i][j + 1] + board[i + 1][j + 1] + board[i + 2][j + 1];
                mx = max(mx, sum);
            }
            // ㄴ
            if (OOB(i, j) and OOB(i + 1, j) and OOB(i + 1, j + 1) and OOB(i + 1, j + 2)) {
                int sum = board[i][j] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 1][j + 2];
                mx = max(mx, sum);
            }
            if (OOB(i, j) and OOB(i + 1, j) and OOB(i + 2, j) and OOB(i + 2, j + 1)) {
                int sum = board[i][j] + board[i + 1][j] + board[i + 2][j] + board[i + 2][j + 1];
                mx = max(mx, sum);
            }
            // 「
            if (OOB(i, j) and OOB(i + 1, j) and OOB(i, j + 1) and OOB(i, j + 2)) {
                int sum = board[i][j] + board[i + 1][j] + board[i][j + 1] + board[i][j + 2];
                mx = max(mx, sum);
            }
            if (OOB(i, j) and OOB(i + 1, j) and OOB(i + 2, j) and OOB(i, j + 1)) {
                int sum = board[i][j] + board[i + 1][j] + board[i + 2][j] + board[i][j + 1];
                mx = max(mx, sum);
            }
            // 」
            if (OOB(i, j) and OOB(i, j + 1) and OOB(i, j + 2) and OOB(i - 1, j + 2)) {
                int sum = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i - 1][j + 2];
                mx = max(mx, sum);
            }
            if (OOB(i, j) and OOB(i, j + 1) and OOB(i - 1, j + 1) and OOB(i - 2, j + 1)) {
                int sum = board[i][j] + board[i][j + 1] + board[i - 1][j + 1] + board[i - 2][j + 1];
                mx = max(mx, sum);
            }

            //
            if (OOB(i, j) and OOB(i + 1, j) and OOB(i + 1, j + 1) and OOB(i + 2, j + 1)) {
                int sum = board[i][j] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 2][j + 1];
                mx = max(mx, sum);
            }
            if (OOB(i, j) and OOB(i + 1, j) and OOB(i + 1, j - 1) and OOB(i + 2, j - 1)) {
                int sum = board[i][j] + board[i + 1][j] + board[i + 1][j - 1] + board[i + 2][j - 1];
                mx = max(mx, sum);
            }

            if (OOB(i, j) and OOB(i, j + 1) and OOB(i - 1, j + 1) and OOB(i - 1, j + 2)) {
                int sum = board[i][j] + board[i][j + 1] + board[i - 1][j + 1] + board[i - 1][j + 2];
                mx = max(mx, sum);
            }
            if (OOB(i, j) and OOB(i, j + 1) and OOB(i + 1, j + 1) and OOB(i + 1, j + 2)) {
                int sum = board[i][j] + board[i][j + 1] + board[i + 1][j + 1] + board[i + 1][j + 2];
                mx = max(mx, sum);
            }
        }
    }
    cout << mx << "\n";
    return 0;
}
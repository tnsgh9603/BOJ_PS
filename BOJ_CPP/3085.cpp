#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[51][51];
int N, ans;

void check() {
    for (int i = 0; i < N; ++i) {
        for (int j = 1, s1 = 1, s2 = 1; j <= N; ++j) {
            if (board[i][j] == board[i][j - 1]) {
                ++s1;
            } else {
                ans = max(s1, ans);
                s1 = 1;
            }
            if (board[j][i] == board[j - 1][i]) {
                ++s2;
            } else {
                ans = max(s2, ans);
                s2 = 1;
            }
        }
    }
}

int main() {
    fastio;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j) {
                swap(board[i][j], board[i][j - 1]);
                check();
                swap(board[i][j], board[i][j - 1]);
            }
            if (i) {
                swap(board[i][j], board[i - 1][j]);
                check();
                swap(board[i][j], board[i - 1][j]);
            }
        }
    }
    cout << ans;
    return 0;
}
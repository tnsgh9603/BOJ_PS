#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, board = 1, board[1001], board, t;

int main() {
    fastio;
    cin >> n;
    for (int i = 0; i <= n; ++i) {
        if (i < n) {
            cin >> board;
            board[++t] = board;
        }
        while (t && board[t] == board) {
            --t;
            ++board;
        }
    }
    cout << (t ? "Sad" : "Nice");
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[10001];

int main() {
    fastio;
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> board[i];
    }
    board[n] = 1;
    sort(board, board + n + 1);
    x = board[n] * board[n - 1] * board[n - 2];
    y = board[n] * board[0] * board[1];
    cout << (x > y ? x : y);
    return 0;
}
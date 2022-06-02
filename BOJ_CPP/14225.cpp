#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
int board[21];

int main() {
    fastio;
    int n, temp = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> board[i];
    }
    sort(board, board + n);
    for (int i = 0; i < n; ++i) {
        if (board[i] > temp + 1) {
            cout << temp + 1;
            return 0;
        }
        temp += board[i];
    }
    cout << temp + 1;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[101][101];
int n, mp, k;

bool OOB(int x, int y) {
    return 1 <= x and x <= n and 1 <= y and y <= mp;
}

int main() {
    fastio;
    cin >> n >> mp >> k;
    if (min(n, mp) < k) {
        cout << "Impossible";
    } else {
        int cnt = k;
        cout << "Possible\n";
        int x = n, y = 1;
        fill(board[0], board[50], '.');
        while (OOB(x, y) and cnt) {
            board[x][y] = '*';
            --x;
            ++y;
            --cnt;
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= mp; ++j) {
                cout << board[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}
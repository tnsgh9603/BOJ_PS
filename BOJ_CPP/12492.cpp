#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char temp[] = {'/', '\\', '\\', '/'};

void sol(int R, int C, vector<string> &board) {
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (board[i][j] == '#') {
                for (int k = 0; k < 4; ++k) {
                    int r = i + "1122"[k] - '1';
                    int c = j + "1212"[k] - '1';
                    if (r < R && c < C && board[r][c] == '#') {
                        board[r][c] = temp[k];
                    } else {
                        cout << "Impossible\n";
                        return;
                    }
                }
            }
        }
    }
    for (int i = 0; i < R; ++i) {
        cout << board[i] << "\n";
    }
}

int main() {
    fastio;
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int R, C;
        cin >> R >> C;
        vector<string> board(R);
        for (int i = 0; i < R; ++i) {
            cin >> board[i];
        }
        cout << "Case #" << t + 1 << ":\n";
        sol(R, C, board);
    }
    return 0;
}
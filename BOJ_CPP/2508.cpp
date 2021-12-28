#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

char board[401][401];

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        memset(board, 0, sizeof(board));
        int N, M, cnt = 0;
        cin >> N >> M;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> board[i][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if ((board[i][j] == '>' && board[i][j + 1] == 'o' && board[i][j + 2] == '<') ||
                    (board[i][j] == 'v' && board[i + 1][j] == 'o' && board[i + 2][j] == '^')) {
                    ++cnt;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
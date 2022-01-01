#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
ll board[501][501], sum, t1, t2, t3, t4;

int main() {
    fastio;
    int N, n = 0, x, y;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
            if (!board[i][j]) {
                x = i, y = j;
            }
        }
    }
    if (!x) {
        n = 1;
    }
    for (int i = 0; i < N; ++i) {
        t1 += board[x][i];
        sum += board[n][i];
    }
    board[x][y] = sum - t1;
    for (int i = 0; i < N; ++i) {
        t1 = 0, t2 = 0;
        for (int j = 0; j < N; ++j) {
            t1 += board[i][j];
            t2 += board[j][i];
        }
        if (t1 != sum || t2 != sum) {
            cout << -1;
            return 0;
        }
        t3 += board[i][i];
        t4 += board[i][N - 1 - i];
    }
    if (t3 != sum || t4 != sum) {
        cout << -1;
        return 0;
    }
    cout << board[x][y];
    return 0;
}
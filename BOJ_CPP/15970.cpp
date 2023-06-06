#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[5001][2];

int main() {
    fastio;
    int z, s = 0;
    cin >> z;
    for (int i = 0; i < z; ++i) {
        cin >> board[i][0] >> board[i][1];
    }
    for (int i = 0; i < z; ++i) {
        int t = INT_MAX;
        for (int j = 0; j < z; ++j) {
            if (board[i][1] == board[j][1] && i != j) {
                t = min(t, abs(board[i][0] - board[j][0]));
            }
        }
        s += t;
    }
    cout << s;
    return 0;
}
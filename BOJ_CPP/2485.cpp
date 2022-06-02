#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[100'001];

int main() {
    fastio;
    int n;
    cin >> n;
    cin >> board[0] >> board[1];
    int x = board[1] - board[0];
    for (int i = 2; i < n; ++i) {
        cin >> board[i];
        x = gcd(x, board[i] - board[i - 1]);
    }
    cout << (board[n - 1] - board[0]) / x - n + 1;
    return 0;
}
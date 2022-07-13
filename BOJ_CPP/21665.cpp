#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char board[101][101];

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            cin >> board[i][j];
        }
    }
    int cnt = 0;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            char c;
            cin >> c;
            if (c == board[i][j]) {
                ++cnt;
            }
        }
    }
    cout << cnt;
    return 0;
}
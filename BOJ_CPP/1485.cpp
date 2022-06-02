#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

long long board[4], y[4], s[6];

int main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        int k = 0;
        for (int i = 0; i < 4; ++i) {
            cin >> board[i] >> y[i];
        }
        for (int i = 0; i < 4; ++i) {
            for (int j = i + 1; j < 4; ++j) {
                s[k] = (board[i] - board[j]) * (board[i] - board[j]) + (y[i] - y[j]) * (y[i] - y[j]);
                ++k;
            }
        }
        sort(s, s + 6);
        cout << (s[0] == s[1] && s[1] == s[2] && s[2] == s[3] && s[4] == s[5]) << '\n';
    }
    return 0;
}
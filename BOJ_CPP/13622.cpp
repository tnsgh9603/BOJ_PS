#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool board[1001][1001];
int cnt[1001], temp[1001];

int main() {
    fastio;
    int n, m, k;
    while (cin >> n >> m >> k && n) {
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                cin >> board[i][j];
                if (i == m) {
                    if(board[i][j]) {
                        ++temp[j];
                    }
                    ++cnt[temp[j]];
                    temp[j] = 0;
                    continue;
                }
                if (board[i][j]) {
                    ++temp[j];
                } else {
                    ++cnt[temp[j]];
                    temp[j] = 0;
                }
            }
        }
        int sum = 0;
        for (int i = k; i <= m; ++i) {
            sum += cnt[i];
            cnt[i] = 0;
        }
        cout << sum << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[200'001];

int main() {
    fastio;
    int n, m, cnt;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> cnt;
        for (int j = 0; j < cnt; ++j) {
            cin >> board[j];
            if (j && board[j] > board[j - 1]) {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;
}
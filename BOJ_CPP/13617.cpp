#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool board[101];

int main() {
    fastio;
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int k;
            cin >> k;
            if (!k) {
                board[i] = 1;
            }
        }
        if (!board[i]) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
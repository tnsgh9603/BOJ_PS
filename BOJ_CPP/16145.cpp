#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int t[1001], board[1001];

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cout << "Data Set " << tc << ":\n";
        memset(t, 0, sizeof(t));
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int x;
                cin >> x;
                if (x) {
                    t[i] |= 1 << j;
                }
            }
            cin >> board[i];
        }
        int b = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x) {
                b |= 1 << i;
            }
        }
        int r = -INT_MAX, l = INT_MAX;
        for (int i = 0; i < m; ++i) {
            int c = __builtin_popcount(t[i] & b) * board[i];
            r = max(c, r);
            l = min(c, l);
        }
        cout << r - l << "\n\n";
    }
    return 0;
}
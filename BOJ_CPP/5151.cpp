#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
double board[100'001];

int main() {
    fastio;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        int n, m, T;
        cin >> n >> m >> T;
        memset(board, 0, sizeof(board));
        for (int i = 0; i < m; ++i) {
            int x, y;
            double z;
            cin >> x >> y >> z;
            if (T - y >= 0 && T - y < 1000) {
                board[x] += z;
            }
        }
        double Y = 0, N = 0;
        for (int i = 1; i <= n; ++i) {
            char c;
            cin >> c;
            if (c == 'Y') {
                ++Y;
            } else {
                N += 1 / (1 + (board[i] / 10000));
            }
        }
        cout << "Data Set " << tc << ":\n" << fixed << setprecision(2) << Y << ' ' << N << "\n\n";
    }
    return 0;
}
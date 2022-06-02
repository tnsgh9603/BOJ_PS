#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int board[1001][1001];

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        memset(board, 0, sizeof(board));
        int c, d, t;
        cin >> c >> d >> t;
        set<int> ans;
        for (int i = 0; i < t; ++i) {
            int s, d, m;
            cin >> s >> d >> m;
            board[s][0] += m;
            board[s][d] += m;
            if (board[s][d] > 2100 || board[s][0] > 40000) {
                ans.insert(s);
            }
        }
        cout << "Data Set " << tc << ":\n";
        if (ans.empty()) {
            cout << "No violations" << '\n';
        } else {
            cout << "Violators:\n";
            for (auto x: ans) {
                cout << x << '\n';
            }
        }
    }
    return 0;
}
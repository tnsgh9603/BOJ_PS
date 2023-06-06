#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<vector<char>> v(N + 1, vector<char>(N + 1));
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                cin >> v[i][j];
            }
        }
        bool a = 1, b = 1;
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                if (v[i][j] != v[i][N + 1 - j]) {
                    a = 0;
                }
                if (v[j][i] != v[N + 1 - j][i]) {
                    b = 0;
                }
            }
        }
        cout << (a && b ? "Magnificent" : (a && !b) ? "Graceful" : (!a && b) ? "Beautiful" : "Useless") << "\n";
    }
    return 0;
}
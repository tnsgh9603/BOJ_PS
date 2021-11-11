#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int grid[101][101], row[101], col[101];

int main() {
    fastio;
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; ++tc) {
        int n, m;
        cin >> n >> m ;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }
        bool flag = 1;
        for(int k = 1; k < 100 && flag; ++k) {
            memset(row, 0, sizeof(row));
            memset(col, 0, sizeof(col));
            for(int i = 0; i < n; ++i) {
                for(int j = 0; j < m; ++j) {
                    if(grid[i][j] == k) {
                        ++row[i];
                        ++col[j];
                    }
                }
            }
            for(int i = 0; i < n; ++i) {
                for(int j = 0; j < m; ++j) {
                    if(grid[i][j] == k) {
                        if (row[i] != m && col[j] != n) {
                            flag = 0;
                        }
                        ++grid[i][j];
                    }
                }
            }
        }
        cout << "Case #" << tc << ": " << (flag ? "YES" : "NO") << "\n";
    }
    return 0;
}
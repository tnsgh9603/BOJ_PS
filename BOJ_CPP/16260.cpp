#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[21][21];

int main() {
    fastio;
    int T, n, m, c;
    cin >> T;
    for (int tc = 0; tc < T; ++tc) {
        cin >> n >> m;
        c = n * m;
        for (int i = 0; i < n + m; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < m; ++k) {
                    if (j + k == i) {
                        arr1[j][k] = c--;
                    }
                }
            }
        }
        if (c != 0) {
            return 0;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << arr1[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
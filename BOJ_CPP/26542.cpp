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
        vector<vector<char>> v(N, vector<char>(N));
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> v[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                for (int k = 1; max(i + k - 1, j + k - 1) < N; ++k) {
                    bool flag = 1;
                    for (int l = i; l < i + k; ++l) {
                        for (int m = j; m < j + k; ++m) {
                            if (v[l][m] != '.') {
                                flag = 0;
                            }
                        }
                    }
                    if (flag) {
                        ans = max(ans, k * k);
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

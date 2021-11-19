#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr1[61], arr2[61][61], cur[61];

int main() {
    fastio;
    int test, i, j, M;
    cin >> test;
    for (int T = 1; T <= test; ++T) {
        int n, p;
        cin >> n >> p;
        for (i = 1; i <= n; ++i) {
            cin >> arr1[i];
            cur[i] = 1;
        }
        M = 0;
        for (i = 1; i <= n; ++i) {
            for (j = 1; j <= p; ++j) {
                cin >> arr2[i][j];
                if (M < (10 * arr2[i][j]) / (9 * arr1[i])) {
                    M = (10 * arr2[i][j]) / (9 * arr1[i]);
                }
            }
            sort(arr2[i] + 1, arr2[i] + p + 1);
        }
        int cnt = 0;
        bool flag;
        for (i = 1; i <= M; ++i) {
            flag = 1;
            for (j = 1; j <= n; ++j) {
                for (; i * (9 * arr1[j]) > 10 * arr2[j][cur[j]] && cur[j] <= p; ++cur[j]);
                if (i * (11 * arr1[j]) < 10 * arr2[j][cur[j]] || cur[j] > p) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                ++cnt;
                for (j = 1; j <= n; ++j) {
                    ++cur[j];
                }
                --i;
            }
        }
        cout << "Case #" << T << ": " << cnt << "\n";
    }
    return 0;
}
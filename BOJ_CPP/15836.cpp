#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[20][20], arr2[20][20], arr3[20][20];

int main() {
    fastio;
    int tc = 1, m, n, p, q;
    while (cin >> m >> n >> p >> q && m) {
        memset(arr1, 0, sizeof(arr1));
        memset(arr2, 0, sizeof(arr2));
        memset(arr3, 0, sizeof(arr3));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> arr1[i][j];
            }
        }
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < q; ++j) {
                cin >> arr2[i][j];
            }
        }
        cout << "Case #" << tc++ << ":\n";
        if (n != p) {
            cout << "undefined\n";
            continue;
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < q; ++j) {
                for (int k = 0; k < n; ++k) {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        for (int i = 0; i < m; ++i) {
            cout << "| ";
            for (int j = 0; j < q; ++j) {
                cout << arr3[i][j] << ' ';
            }
            cout << "|\n";
        }
    }
    return 0;
}
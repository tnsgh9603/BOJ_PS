#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[101], arr2[101];
char mat[1001][51];

int main() {
    fastio;
    int n, m, t;
    cin >> n >> m >> t;
    for (int i = 0; i < n; ++i) {
        arr1[i] = INT_MAX;
    }
    for (int i = 0; i < m * n; ++i) {
        for (int j = 0; j < t; ++j) {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < t; ++i) {
        int cnt = 0;
        for (int j = 0; j < m * n; ++j) {
            if (mat[j][i] == '#') {
                arr1[cnt] = min(arr1[cnt], j);
                arr2[cnt] = max(arr2[cnt], j);
                ++cnt;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << arr2[i] - arr1[i] << '\n';
    }
    return 0;
}

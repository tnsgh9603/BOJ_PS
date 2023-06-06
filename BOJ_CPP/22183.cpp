#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[3][101][101];

int main() {
    fastio;
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < 3; ++i) {
        int p;
        cin >> p;
        for (int j = 0; j < p; ++j) {
            int x, y;
            cin >> x >> y;
            arr1[i][x][y] = 1;
        }
    }
    int cnt = 0;
    for (int x = 1; x <= n; ++x) {
        for (int y = 1; y <= m; ++y) {
            for (int z = 1; z <= k; ++z) {
                if (!arr1[0][x][y] && !arr1[1][y][z] && !arr1[2][x][z]) {
                    ++cnt;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
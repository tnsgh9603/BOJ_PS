#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int pSum[1025][1025];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int num;
            cin >> num;
            pSum[i + 1][j + 1] = pSum[i][j + 1] + pSum[i + 1][j] - pSum[i][j] + num;
        }
    }
    for (int i = 0; i < m; ++i) {
        int x1, y1, x2, y2;
        cin >> y1 >> x1 >> y2 >> x2;
        cout << pSum[y2][x2] - pSum[y1 - 1][x2] - pSum[y2][x1 - 1] + pSum[y1 - 1][x1 - 1] << "\n";
    }
    return 0;
}
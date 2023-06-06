#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[64], arr2[64];

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n, m, cnt = 0;
        cin >> n >> m;
        memset(arr1, 0, sizeof(arr1));
        memset(arr2, 0, sizeof(arr2));
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            if (arr1[x] && arr2[y]) {
                ++cnt;
            }
            arr1[x] = 1;
            arr2[y] = 1;
        }
        cout << "Strategy #" << tc << ": " << cnt << "\n\n";
    }
    return 0;
}
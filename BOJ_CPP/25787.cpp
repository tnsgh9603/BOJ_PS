#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[101][2];

int main() {
    fastio;
    int s, n, mx = 0;
    cin >> s >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            int cnt = 0;
            for (int k = 0; k < n; ++k) {
                if (i <= arr[k][0] && arr[k][0] <= i + s && j <= arr[k][1] && arr[k][1] <= j + s) {
                    ++cnt;
                }
            }
            mx = max(mx, cnt);
        }
    }
    cout << mx;
    return 0;
}
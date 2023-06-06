#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr1[10001];

int main() {
    fastio;
    int h, w, n, p = 1, sum = 0, wal = 0;
    bool flag = 0;
    cin >> h >> w >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr1[i];
    }
    while (p <= n) {
        sum += arr1[p++];
        if (sum > w) {
            flag = 1;
            break;
        }
        if (sum == w) {
            ++wal;
            sum = 0;
        }
        if (wal == h) {
            break;
        }
    }
    cout << (wal != h || flag ? "NO" : "YES");
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[20];

int main() {
    fastio;
    int n = 11, cnt = 0;
    for (int i = 1; i <= n; ++i) {
        int x, y;
        cin >> x >> y;
        cnt += y * 20;
        arr[i] = x;
    }
    sort(arr + 1, arr + n + 1);
    int p = 0;
    for (int i = 1; i <= n; ++i) {
        p += arr[i];
        cnt += p;
    }
    cout << cnt;
    return 0;
}
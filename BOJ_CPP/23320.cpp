#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[101];

int main() {
    fastio;
    int n, x, y, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> x >> y;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= y) {
            ++cnt;
        }
    }
    cout << n * x / 100 << " " << cnt;
    return 0;
}
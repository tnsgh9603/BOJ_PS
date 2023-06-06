#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[101];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int mx = -INT_MAX, mn = INT_MAX;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        int y = 0;
        for (int j = 0; j < n; ++j) {
            char t;
            cin >> t;
            if (t == 'O') {
                y += arr[j];
            }
        }
        if (y > mx || (y == mx && mn > x)) {
            mx = y, mn = x;
        }
    }
    cout << mn << " " << mx;
    return 0;
}
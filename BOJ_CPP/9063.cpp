#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, x, y, mx_x = -INT_MAX, mn_x = INT_MAX, mn_y = INT_MAX, mx_y = -INT_MAX;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        mx_x = max(mx_x, x);
        mn_x = min(mn_x, x);
        mx_y = max(mx_y, y);
        mn_y = min(mn_y, y);
    }
    cout << (mx_y - mn_y) * (mx_x - mn_x);
    return 0;
}
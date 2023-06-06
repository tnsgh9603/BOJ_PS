#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k, x, y, cnt = 0;
    cin >> n >> k >> x >> y;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        if (hypot(abs(x - a), abs(y - b)) > k) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
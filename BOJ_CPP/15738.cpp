#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k, m, d;
    cin >> n >> k >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> d;
    }
    while (m--) {
        int t;
        cin >> t;
        if (t > 0 && k <= t) {
            k = t + 1 - k;
        } else if (n + t + 1 <= k) {
            k = 2 * n + t + 1 - k;
        }
    }
    cout << k;
    return 0;
}
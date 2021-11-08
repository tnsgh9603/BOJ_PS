#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        int n, mn = INT_MAX, x = 0, a, sum = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a;
            x ^= a;
            sum += a;
            mn = min(mn, a);
        }
        cout << "Case #" << tc << ": " << (!x ? to_string(sum - mn) : "NO") << "\n";
    }
    return 0;
}
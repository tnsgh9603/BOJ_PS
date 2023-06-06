#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t, mx = INT_MAX, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a <= b) {
            mx = min(mx, b);
        }
    }
    cout << (mx == INT_MAX ? -1 : mx);
    return 0;
}
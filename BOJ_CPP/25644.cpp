#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, mn = INT_MAX, ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        ans = max(m - mn, ans);
        mn = min(mn, m);
    }
    cout << ans;
    return 0;
}
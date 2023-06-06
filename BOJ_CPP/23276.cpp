#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    int ans = INT_MAX;
    while (n--) {
        int y, a, b;
        cin >> y >> a >> b;
        ans = min(ans, y + a / gcd(a, b) * b);
    }
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, n;
    cin >> a >> b >> n;
    int ans = abs(a - b);
    while (n--) {
        int c;
        cin >> c;
        ans = min(ans, 1 + abs(c - b));
    }
    cout << ans;
    return 0;
}
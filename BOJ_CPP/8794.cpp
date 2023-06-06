#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int z;
    cin >> z;
    while (z--) {
        int n, m, l, ans = 0;
        cin >> n >> m >> l;
        n -= (m - l + 1);
        ans += n / m;
        if (n % m) {
            ++ans;
        }
        if (l == 1) {
            ++ans;
        }
        cout << ans << "\n";
    }
    return 0;
}
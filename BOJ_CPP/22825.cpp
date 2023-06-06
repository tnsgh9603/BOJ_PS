#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        ll ans = LLONG_MAX, z = n * n * n;
        for (int i = 1; i <= n; ++i) {
            for (int j = i; j <= n; ++j) {
                ll x = i * i * i, y = j * j * j;
                if (x + y <= z) {
                    ans = min(ans, z - x - y);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
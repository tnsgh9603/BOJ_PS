#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    fastio;
    long long a, b, ans = 1;
    cin >> a >> b;
    a %= MOD;
    while (b > 0) {
        if (b & 1) {
            ans = ans * a % MOD;
        }
        b >>= 1;
        a = a * a % MOD;
    }
    cout << ans;
    return 0;
}
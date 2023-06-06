#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
ll m = 1e12 - 1;

int main() {
    fastio;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        ll n, r, s;
        cin >> n >> r;
        s = 0;
        r = m / (r * r);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (gcd(i, j) != 1) {
                    continue;
                }
                s += i * i + j * j <= r;
            }
        }
        cout << "Case #" << tc << ": " << s << "\n";
    }
    return 0;
}
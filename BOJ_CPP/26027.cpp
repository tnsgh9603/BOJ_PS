#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll best = LLONG_MAX, xa = -1, ya = -1;
    for (ll x = 0; x <= n; ++x) {
        ll y = ll(sqrt(n * n - x * x));
        while (y * y + x * x <= n * n) {
            ++y;
        }
        if (y * y + x * x < best || (y * y + x * x == best && rand() % 2 == 0)) {
            xa = x;
            ya = y;
            best = y * y + x * x;
        }
    }
    cout << xa << " " << -ya;
    return 0;
}

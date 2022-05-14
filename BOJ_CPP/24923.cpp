#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
using ll = long long;

ll sol(ll x) {
    x %= 9;
    ll t = 0;
    for (ll i = 1; i <= x; ++i) {
        t += i;
    }
    return t % 9;
}

int main() {
    fastio;
    ll a, b;
    cin >> a >> b;
    cout << (sol(b) - sol(a + 8) + 9) % 9;
    return 0;
}

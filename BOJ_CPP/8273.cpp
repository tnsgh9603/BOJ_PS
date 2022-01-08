#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

typedef long long ll;

int main() {
    fastio;
    ll n, cnt = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0, a, b; i < n && cin >> a >> b; v[i++] = a + b);
    for (int i = 0, j = 0; i < n; i = j, ++cnt) {
        for (ll l = 0, r = v[i], t = 0; j < n && l <= r; ++j) {
            const ll val = j + 1 < n ? min(v[j], v[j + 1]) : v[j];
            t = v[j] - t;
            if (j - i + 1 & 1) {
                l = max(l, t - val);
                r = min(r, t);
            } else {
                l = max(l, -t);
                r = min(r, val - t);
            }
        }
    }
    cout << n - cnt;
    return 0;
}
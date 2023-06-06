#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; ++i) {
        ll tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    ll g = v[1] - v[0];
    for (int i = 2; i < n; i++) g = gcd(g, v[i] - v[i - 1]);
    ll ans = (-v[0]) % g + g;
    if (ans == g) {
        ans -= g;
    }
    cout << ans << "\n";
}

int main() {
    fastio;
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}
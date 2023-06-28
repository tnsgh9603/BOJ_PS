#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (ll &i: v) {
        cin >> i;
    }
    ll sum = accumulate(v.begin(), v.begin() + m, 0ll), mx = sum, st = 0, en = m;
    while (en < n) {
        sum += v[en++] - v[st++];
        mx = max(mx, sum);
    }
    cout << mx;
    return 0;
}
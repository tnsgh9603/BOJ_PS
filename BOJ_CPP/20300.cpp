#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll mx = -LLONG_MAX;
    if (n % 2) {
        for (int i = 0; i < n / 2; ++i) {
            mx = max(mx, v[i] + v[n - 2 - i]);
        }
        mx = max(mx, v[n - 1]);
    } else {
        for (int i = 0; i < n / 2; ++i) {
            mx = max(mx, v[i] + v[n - 1 - i]);
        }
    }
    cout << mx;
    return 0;
}
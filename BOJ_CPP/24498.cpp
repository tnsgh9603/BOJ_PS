#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    ll mx = *max_element(v.begin(), v.end());
    for (int i = 1; i < n - 1; ++i) {
        if (v[i - 1] && v[i] && v[i + 1]) {
            mx = max(mx, 0ll + v[i] + min(v[i - 1], v[i + 1]));
        }
    }
    cout << mx;
    return 0;
}
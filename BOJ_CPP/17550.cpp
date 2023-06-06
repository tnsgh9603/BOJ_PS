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
    ll A = v[0] * v[0], B = accumulate(v.begin() + 1, v.end(), 0), mx = A * B;
    for (int k = 1; k < n - 1; ++k) {
        A += v[k] * v[k];
        B -= v[k];
        mx = max(mx, A * B);
    }
    cout << mx;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    ll T;
    cin >> T;
    for (ll i = 0; i < T; ++i) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll e = a * c;
        ll f = (a + abs(a - b)) * d;
        ll g = abs(a - b) * c + b * d;
        cout << min(min(e, f), g) << "\n";
    }
    return 0;
}

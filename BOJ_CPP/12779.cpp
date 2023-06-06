#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    ll a, b, ans = 0;
    cin >> a >> b;
    for (ll h = 1; h * h <= b; ++h) {
        if (a < h * h) {
            ++ans;
        }
    }
    if (!ans) {
        cout << 0;
        return 0;
    }
    cout << ans / gcd(b - a, ans), (b - a) / gcd(b - a, ans);
    return 0;
}
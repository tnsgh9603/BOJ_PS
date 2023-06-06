#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = 1, temp = a;
    while (b) {
        if (b & 1) {
            ans *= temp;
            ans %= c;
        }
        temp *= temp;
        temp %= c;
        b /= 2;
    }
    cout << ans;
    return 0;
}
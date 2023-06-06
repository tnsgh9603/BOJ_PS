#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    ll a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    for (ll h = 0; h < a; ++h) {
        for (ll m = 1; m < b - 1; ++m) {
            if ((a - 1) * c * m == (b - 1) * (b * c * h + c * m - a * c * m)) {
                ++cnt;
            }
        }
    }
    cout << cnt;
    return 0;
}
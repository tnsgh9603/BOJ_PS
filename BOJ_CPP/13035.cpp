#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll n = a * b / c / c;
        if (n == 0) {
            ++n;
        }
        ll u = 1, ret = abs(a * b - c * c);
        for (int i = 0; i < 2; ++i) {
            ll tmp = abs(a * b - c * c * (n + i));
            if (tmp < ret) {
                ret = tmp, u = i + n;
            }
        }
        cout << u * c * c << "\n";
    }
    return 0;
}
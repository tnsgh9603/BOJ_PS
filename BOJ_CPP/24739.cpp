#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    ll x = 0, y = (1ll << (s.length() - 1));
    for (int i = 0; i < s.length(); ++i) {
        x += ll(s[i] - '0') * pow(3, i) * (1ll << (s.length() - 1 - i));
    }
    if (x % y == 0) {
        cout << x / y;
    } else {
        cout << x / y << " " << (x % y) / gcd(x % y, y) << "/" << y / gcd(x % y, y);
    }
    return 0;
}
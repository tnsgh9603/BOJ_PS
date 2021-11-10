#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

#define ll long long

int main() {
    fastio;
    ll n;
    cin >> n;
    bool flag = 0;
    if (n == 1) {
        flag = 1;
    }
    for (ll i = 2; !flag && i * i <= n; ++i) {
        if (n % i) {
            continue;
        }
        flag = 1;
    }
    ll m = 0;
    while (n && !flag) {
        m = m * 10;
        int k = n % 10;
        if (k <= 2 || k == 5 || k == 8) {
            m += k;
        } else if (k == 6) {
            m += 9;
        } else if (k == 9) {
            m += 6;
        } else {
            flag = 1;
        }
        n /= 10;
    }
    for (ll i = 2; !flag && i * i <= m; ++i) {
        if (m % i) {
            continue;
        }
        flag = 1;
    }
    cout << (flag ? "no" : "yes");
    return 0;
}
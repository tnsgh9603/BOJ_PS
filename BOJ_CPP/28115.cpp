#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<ll> v(n);
    for (ll &i: v) {
        cin >> i;
    }
    ll diff = v[1] - v[0];
    bool flag = 1;
    for (int i = 2; i < n; ++i) {
        if (v[i] - v[i - 1] != diff) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        cout << "YES\n";
        for (ll &i: v) {
            cout << i << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; ++i) {
            cout << "0 ";
        }
    } else {
        cout << "NO";
    }
    return 0;
}
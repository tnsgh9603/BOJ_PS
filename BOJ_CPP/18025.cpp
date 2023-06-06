#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int m = 0; m < n; ++m) {
        cin >> v[m];
    }
    int mx = 100, d;
    for (int m = 0; m < n - 2; ++m) {
        if (max(v[m], v[m + 2]) < mx) {
            mx = max(v[m], v[m + 2]);
            d = m;
        }
    }
    cout << d + 1 << " " << mx;
    return 0;
}
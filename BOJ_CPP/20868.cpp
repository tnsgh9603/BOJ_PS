#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0, w; i < n; ++i) {
        cin >> w;
        if (w) {
            v.push_back(w);
        }
    }
    ll mx = 0, s;
    for (int i = 2; i <= n; ++i) {
        mx += i * v[i - 2];
    }
    s = mx;
    for (int i = 0; i < n - 1; ++i) {
        s -= v[i];
        mx = max(mx, s);
    }
    cout << mx;
    return 0;
}
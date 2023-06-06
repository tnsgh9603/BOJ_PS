#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, x, mx = 0;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        ++mp[x];
        mx = max(mp[x], mx);
    }
    cout << mx;
    return 0;
}
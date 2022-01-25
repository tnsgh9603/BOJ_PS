#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    int n, m;
    cin >> n;
    vector<tuple<ll, ll, ll>> v;
    for (int i = 0; i < n; ++i) {
        ll a, b, c;
        cin >> a >> b >> c;
        v.push_back({a, b, c});
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        int cnt = 0;
        for (int j = 0; j < n; ++j) {
            auto[x, y, z] = v[j];
            if ((x - a) * (x - a) + (y - b) * (y - b) + (z - c) * (z - c) <= d * d) {
                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
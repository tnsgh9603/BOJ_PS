#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
ll arr1[50001], cost[50001];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        cin >> arr1[i];
        cost[i] = arr1[i] - arr1[i - 1];
    }
    if (n <= 3) {
        cout << 0;
        return 0;
    }
    vector<tuple<ll, ll, ll>> v;
    for (int i = 1; i < n - 1; ++i) {
        v.push_back({cost[i] + cost[i + 1], i + 2, i});
    }
    sort(v.begin(), v.end());
    auto[a, b, c] = v[0];
    auto[d, e, f] = v[1];
    cout << a + d << "\n" << b << " " << c << " " << e << " " << f;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
ll mn[100'001][2];

int main() {
    fastio;
    int n, a, b, c;
    cin >> n;
    vector<tuple<int, int, int>> v(1);
    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
        v.push_back({a, b, c});
    }
    for (int i = 1; i <= n; ++i) {
        auto[a, b, c] = v[i];
        mn[i][0] = max(mn[i - 1][0], mn[i - 1][1]);
        mn[i][1] = max(mn[i][1], mn[i - 1][0] + c);
    }
    cout << max(mn[n][0], mn[n][1]);
    return 0;
}
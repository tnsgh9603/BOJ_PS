#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, st, en, idx = 0;
    double mx = INT_MAX;
    cin >> n >> st >> en;
    vector<pair<int, int>> v(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> v[i].first >> v[i].second;
        int a = v[i].first, b = v[i].second;
        double dist = sqrt((st - a) * (st - a) + (en - b) * (en - b));
        if (dist < mx) {
            idx = i;
            mx = dist;
        }
    }
    cout << fixed << setprecision(2) << st << " " << en << "\n" << v[idx].first << " " << v[idx].second << "\n" << mx;
    return 0;
}
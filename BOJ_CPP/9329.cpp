#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[101];

int main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> order;
        vector<int> v1[n], v2(m);
        for (int i = 0; i < n; ++i) {
            int k, prize;
            cin >> k;
            for (int j = 0; j < k; ++j) {
                int w;
                cin >> w;
                v1[i].push_back(w);
            }
            cin >> prize;
            order.push_back({prize, i});
        }
        sort(order.rbegin(), order.rend());
        memset(arr1, 0, sizeof(arr1));
        for (int i = 1; i <= m; ++i) {
            cin >> arr1[i];
        }
        int sum = 0;
        for (int i = 0; i < order.size(); ++i) {
            int mn = INT_MAX;
            for (int j = 0; j < v1[order[i].second].size(); ++j) {
                mn = min(mn, arr1[v1[order[i].second][j]]);
            }
            sum += mn * order[i].first;
        }
        cout << sum << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
const int INF = 200'000'000;
ll dist[501];

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        fill(dist, dist + 501, INF);
        int n, m, w, s, e, t;
        cin >> n >> m >> w;
        vector<pair<int, int>> v[2501];
        map<pair<int, int>, int> mp;
        for (int i = 0; i < m; ++i) {
            cin >> s >> e >> t;
            v[s].push_back({e, t});
            v[e].push_back({s, t});
        }
        for (int i = 0; i < w; ++i) {
            cin >> s >> e >> t;
            v[s].push_back({e, -t});
        }
        dist[1] = 0;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                for (int k = 0; k < v[j].size(); ++k) {
                    ll next = v[j][k].first, nextCost = v[j][k].second + dist[j];
                    if (dist[next] > nextCost) {
                        if (i == n) {
                            cout << "YES\n";
                            goto hell;
                        }
                        dist[next] = nextCost;
                    }
                }
            }
        }
        cout << (dist[1] < 0 ? "YES" : "NO") << "\n";
        hell:;
    }
    return 0;
}
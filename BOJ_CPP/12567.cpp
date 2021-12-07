#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef pair<int, int> pii;
#define all(x) x.begin(), x.end()
int par[1'000'001], mins[1'000'001], maxx[1'000'001], maxy[1'000'001];

int find(int x) {
    return par[x] == x ? x : (par[x] = find(par[x]));
}

void merge(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) {
        return;
    }
    par[x] = y;
    mins[y] = min(mins[y], mins[x]);
    maxx[y] = max(maxx[y], maxx[x]);
    maxy[y] = max(maxy[y], maxy[x]);
}

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        cout << "Case #" << tc << ": ";
        vector<pii> v;
        int n;
        cin >> n;
        while (n--) {
            int r1, c1, r2, c2;
            cin >> r1 >> c1 >> r2 >> c2;
            for (int i = r1; i <= r2; ++i) {
                for (int j = c1; j <= c2; ++j) {
                    v.push_back({i, j});
                }
            }
        }
        sort(all(v));
        for (int i = 0; i < v.size(); ++i) {
            par[i] = i;
            mins[i] = v[i].first + v[i].second;
            maxx[i] = v[i].first;
            maxy[i] = v[i].second;
        }
        for (int i = 0; i < v.size(); ++i) {
            for (int dx = -1; dx <= 1; ++dx) {
                for (int dy = -1; dy <= 1; ++dy) {
                    if (dx == dy) {
                        continue;
                    }
                    int idx = lower_bound(all(v), make_pair(v[i].first + dx, v[i].second + dy)) - v.begin();
                    if (idx < v.size() && v[idx] == make_pair(v[i].first + dx, v[i].second + dy)) {
                        merge(i, idx);
                    }
                }
            }
        }
        int ret = 0;
        for (int i = 0; i < v.size(); ++i) {
            int x = find(i);
            ret = max(ret, maxx[x] + maxy[x] - mins[x] + 1);
        }
        cout << ret << "\n";
    }
    return 0;
}
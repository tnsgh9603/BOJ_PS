#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

#define f first
#define s second
typedef pair<int, int> p;
int uni[310];

int u(int i) {
    return uni[i] > 0 ? uni[i] = v2(uni[i]) : i;
}

int ppap(vector<p> t) {
    int ans = 987654321, tot = 0;
    t.push_back({0, 0});
    sort(t.begin(), t.end());
    for (int i = t.size() - 1; i >= 0; --i) {
        ans = min(ans, max(tot, t[i].f + 1));
        tot += t[i].s;
    }
    return ans;
}

int main() {
    fastio;
    int n, m, k;
    cin >> n >> m >> k;
    while (n) {
        for (int i = 0; i <= n; ++i) {
            uni[i] = -1;
        }
        vector<p> v[301];
        p a;
        int t, tot = 0;
        for (int i = 0; i < m; ++i) {
            cin >> a.f >> a.s;
            if (v2(a.f) != v2(a.s)) {
                uni[v2(a.f)] = v2(a.s);
            }
        }
        for (int i = 0; i < k; ++i) {
            cin >> t >> a.s >> a.f, v[v2(t)].push_back(a);
        }
        for (int i = 1; i <= n; ++i) {
            if (!v[i].empty()) {
                tot += ppap(v[i]);
            }
        }
        cout << tot << "\n";
        cin >> n >> m >> k;
    }
    return 0;
}

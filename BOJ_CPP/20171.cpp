#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define compress(x) do { sort(all(x)); (x).erase(unique(all(x)), (x).end()); } while(0)
using namespace std;
map<int, int> mp;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v[100'001];
    for (int i = 0; i < n - 1; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].emplace_back(b, c);
        v[b].emplace_back(a, c);
    }
    for (int i = 0; i < k; ++i) {
        int n;
        cin >> n;
        mp[n] = 1;
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (v[i].size() == 1) {
            if (!mp.count(i)) {
                ++cnt;
            }
        }
    }
    cout << n - cnt;
    return 0;
}
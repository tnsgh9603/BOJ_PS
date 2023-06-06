#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int l, g, r, b, c;
    string a;
    cin >> l >> g >> r;
    map<string, pair<int, int>> mp;
    bitset<1001> bs;
    for (int i = 0; i < g; ++i) {
        cin >> a >> b >> c;
        mp[a] = {b, c};
    }
    for (int i = 0; i < r; ++i) {
        cin >> a;
        for (int j = mp[a].first; j <= l; j += mp[a].second) {
            bs[j].flip();
        }
    }
    int cnt = 0;
    for (int i = 1; i <= l; ++i) {
        if (bs[i]) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
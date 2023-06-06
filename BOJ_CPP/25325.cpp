#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    map<string, int> mp;
    while (n--) {
        string s;
        cin >> s;
        mp[s] = 0;
    }
    string t;
    while (cin >> t) {
        ++mp[t];
    }
    vector<pair<string, int>> v;
    for (auto &[a, b]: mp) {
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    });
    for (auto i: v) {
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}

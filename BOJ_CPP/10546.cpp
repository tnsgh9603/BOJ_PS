#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    map<string, int> mp;
    string s, ans;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        ++mp[s];
    }
    for (int i = 0; i < n - 1; ++i) {
        cin >> s;
        --mp[s];
    }
    for (auto i: mp) {
        if (i.second) {
            ans = i.first;
        }
    }
    cout << ans;
    return 0;
}
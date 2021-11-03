#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, mx = 0;
    cin >> n;
    map<string, int> m;
    string s, ans;
    while (n--) {
        cin >> s;
        ++m[s];
    }
    for (auto i = m.begin(); i != m.end(); ++i) {
        if (mx < i->second) {
            mx = i->second;
            ans = i->first;
        }
    }
    cout << ans;
    return 0;
}
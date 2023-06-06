#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
map<string, vector<string>> mp;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        string s1, s2;
        mp.clear();
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> s1 >> s2;
            mp[s2].push_back(s1);
        }
        int ans = 1;
        for (auto[a, b]: mp) {
            ans *= b.size() + 1;
        }
        cout << ans - 1 << "\n";
    }
    return 0;
}
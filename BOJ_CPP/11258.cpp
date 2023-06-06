#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    vector<tuple<int, string, int>> v;
    for (int i = 0; i < 6; ++i) {
        string s1;
        int s2;
        cin >> s1 >> s2;
        if (i == 0 || i == 1 || i == 2) {
            v.push_back({1, s1, s2});
        } else {
            v.push_back({-1, s1, s2});
        }
    }
    string s;
    while (cin >> s and s != "-1") {
        int ans = 0;
        for (auto[a, b, c]: v) {
            if (a == 1 and s.substr(0, b.length()) == b || a == -1 and s.substr(s.length() - b.length()) == b) {
                ans += c;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    int k;
    cin >> s >> k;
    pair<char, char> mn = {'z', 'z'};
    for (int i = 0; i < s.size(); ++i) {
        if (i) {
            mn = min(mn, {s[i], s[i - 1]});
        }
        if (i + 1 < s.size()) {
            mn = min(mn, {s[i], s[i + 1]});
        }
    }
    for (int i = 0; i < k; ++i) {
        cout << (i % 2 ? mn.second : mn.first);
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
map<string, int> mp;

int main() {
    fastio;
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        ++mp[s.substr(s.find(".") + 1)];
    }
    for (auto x: mp) {
        cout << x.first << " " << x.second << "\n";
    }
    return 0;
}

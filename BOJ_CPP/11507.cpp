#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

map<char, int> mp;
set<int> st[4];

int main() {
    fastio;
    mp['P'] = 0;
    mp['K'] = 1;
    mp['H'] = 2;
    mp['T'] = 3;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i += 3) {
        char prev = s[i];
        int idx = mp[prev], val = stoi(s.substr(i + 1, 2));
        if (st[idx].count(val)) {
            cout << "GRESKA";
            return 0;
        } else {
            st[idx].insert(val);
        }

    }
    for (int i = 0; i < 4; ++i) {
        cout << 13 - st[i].size() << " ";
    }
    return 0;
}
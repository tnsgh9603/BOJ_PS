#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    bool flag1 = 0, flag2 = 0;
    cin >> s;
    map<char, string> mp;
    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];
        mp[c] = (mp.find(c) != mp.end() ? (mp[c].compare("even") == 0 ? "odd" : "even") : "odd");
    }
    map<char, string>::iterator it = mp.begin();
    while (it != mp.end()) {
        (it++->second.compare("even") == 0 ? flag2 : flag1) = 1;
        if (flag2 & flag1) {
            cout << "0/1";
            return 0;
        }
    }
    cout << (flag1 ? 1 : 0);
    return 0;
}
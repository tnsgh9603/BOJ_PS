#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2;
    cin >> s1 >> ws;
    unordered_map<char, char> mp;
    for (int i = 0; i < 26; ++i) {
        mp[char('a' + i)] = s1[i];
        mp[char('A' + i)] = s1[i] - 'a' + 'A';
    }
    mp[' '] = ' ';
    getline(cin, s2);
    for (int i = 0; i < s2.length(); ++i) {
        cout << mp[s2[i]];
    }
    return 0;
}
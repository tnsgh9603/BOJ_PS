#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
map<char, int> mp1, mp2;
map<char, int>::iterator iter;

int main() {
    fastio;
    int n;
    cin >> n >> ws;
    while (n--) {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] != ' ') {
                if(islower(s[i])) {
                    ++mp1[s[i]];
                }
                else {
                    ++mp2[s[i]];
                }
            }
        }
    }
    for (auto iter = mp1.begin(); iter != mp1.end(); ++iter) {
        cout << iter->first << " " << iter->second << "\n";
    }
    for (auto iter = mp2.begin(); iter != mp2.end(); ++iter) {
        cout << iter->first << " " << iter->second << "\n";
    }
    return 0;
}
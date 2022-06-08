#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
map<char, int> mp;

int main() {
    fastio;
    string ans, s;
    cin >> ans;
    for (int i = 0; i < 7; ++i) {
        cin >> s;
        if (s == ans) {
            cout << "WINNER";
            return 0;
        }
        if (i == 6) {
            cout << "LOSER";
            return 0;
        }
        mp.clear();
        for (int j = 0; j < 5; ++j) {
            mp[ans[j]] = 1;
        }
        for (int j = 0; j < 5; ++j) {
            if (s[j] == ans[j]) {
                cout << "G";
            } else if (mp.count(s[j])) {
                cout << "Y";
            } else {
                cout << "X";
            }
        }
        cout << "\n";
    }
}
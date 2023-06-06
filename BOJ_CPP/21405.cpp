#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    s += s;
    for (int i = 0; i < s.length() / 2; ++i) {
        string s1 = s.substr(i, s.length() / 2), s2 = s1;
        reverse(s2.begin(), s2.end());
        if (s1 == s2) {
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        int j = i;
        while (j < s.length() and s[j] != ' ' and s[j] != '<') {
            ++j;
        }
        reverse(s.begin() + i, s.begin() + j);
        if (j < s.length() and s[j] == '<') {
            while (s[j] != '>') {
                ++j;
            }
        }
        i = j;
    }
    cout << s;
    return 0;
}
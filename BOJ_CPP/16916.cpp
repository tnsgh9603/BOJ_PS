#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2;
    cin >> s1 >> s2;
    int idx = 0;
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] == s2[idx]) {
            ++idx;
        } else {
            idx = 0;
        }
        if (idx == s2.length()) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
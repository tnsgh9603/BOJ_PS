#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, cnt1 = 0, cnt2 = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.length(); ++i) {
        ++(s[i] == 't' ? cnt1 : cnt2);
    }
    if (cnt1 == cnt2) {
        for (int j = 0; j < s.length(); ++j) {
            cout << s[j];
        }
        return 0;
    }
    for (int i = 0; i < s.length(); ++i) {
        --(s[i] == 't' ? cnt1 : cnt2);
        if (cnt1 == cnt2) {
            for (int j = i + 1; j < s.length(); ++j) {
                cout << s[j];
            }
            break;
        }
    }
    return 0;
}
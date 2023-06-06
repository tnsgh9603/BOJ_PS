#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2;
    cin >> s1 >> s2;
    int idx = 0;
    while (1) {
        if (idx == min(s1.length(), s2.length())) {
            break;
        }
        if (idx & 1) {
            if (idx >= s2.length()) {
                break;
            } else {
                cout << s2[idx++];
            }
        } else {
            if (idx >= s1.length()) {
                break;
            } else {
                cout << s1[idx++];
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int vow(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    fastio;
    string s;
    cin >> s;
    int ans = 1;
    for (int i = 1; s[i]; ++i) {
        if (vow(s[i]) == vow(s[i - 1])) {
            ans = 0;
            break;
        }
    }
    cout << ans;
    return 0;
}
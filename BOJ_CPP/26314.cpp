#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') {
                ++cnt;
            }
        }
        cout << s << "\n" << (cnt > s.length() / 2 ? 1 : 0) << "\n";
    }
    return 0;
}
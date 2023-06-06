#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    while (getline(cin, s)) {
        for (int i = 0; i < s.size(); i += 2) {
            int c = 0;
            if (s[i] >= '0' && s[i] <= '9') {
                c += s[i] - '0';
            } else {
                c += s[i] - 'A' + 10;
            }
            c *= 16;
            if (s[i + 1] >= '0' && s[i + 1] <= '9') {
                c += s[i + 1] - '0';
            } else {
                c += s[i + 1] - 'A' + 10;
            }
            cout << (char) c;
        }
        cout << "\n";
    }
    return 0;
}
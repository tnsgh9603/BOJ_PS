#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    int tc = 1;
    while (cin >> s && s != "0") {
        while (1) {
            string temp = "";
            if (s.length() % 2) {
                break;
            }
            for (int i = 0; i < s.length(); i += 2) {
                int len = s[i] - '0';
                for (int j = 0; j < len; ++j) {
                    temp += s[i + 1];
                }
            }
            if (s == temp) {
                break;
            }
            s = temp;
        }
        cout << "Test " << tc++ << ": " << s << "\n";
    }
    return 0;
}
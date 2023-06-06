#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool is_palindrome(string s) {
    return equal(s.begin(), s.end(), s.rbegin());
}

int main() {
    fastio;
    string s;
    while (cin >> s && s != "0") {
        int len = s.length(), cnt = 0;
        while (1) {
            if (is_palindrome(s)) {
                break;
            }
            int n = stoi(s);
            ++n;
            string temp = to_string(n), ans = "";
            for (int i = 0; i < len - int(temp.length()); ++i) {
                ans += "0";
            }
            s = ans + to_string(n);
            ++cnt;
        }
        cout << cnt << "\n";
    }
    return 0;
}
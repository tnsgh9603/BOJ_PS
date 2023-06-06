#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool is_palindrome(string s) {
    return equal(s.begin(), s.end(), s.rbegin());
}

int main() {
    fastio;
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); ++i) {
        if (is_palindrome(s.substr(0, i)) and is_palindrome(s.substr(i))) {
            cout << s.substr(0, i) << " " << s.substr(i);
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
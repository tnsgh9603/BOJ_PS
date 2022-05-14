#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool is_palindrome(string s) {
    return equal(s.begin(), s.end(), s.rbegin());
}

int main() {
    fastio;
    map<char, string> mp;
    mp['a'] = "01";
    mp['b'] = "1000";
    mp['c'] = "1010";
    mp['d'] = "100";
    mp['e'] = "0";
    mp['f'] = "0010";
    mp['g'] = "110";
    mp['h'] = "0000";
    mp['i'] = "00";
    mp['j'] = "0111";
    mp['k'] = "101";
    mp['l'] = "0100";
    mp['m'] = "11";
    mp['n'] = "10";
    mp['o'] = "111";
    mp['p'] = "0110";
    mp['q'] = "1101";
    mp['r'] = "010";
    mp['s'] = "000";
    mp['t'] = "1";
    mp['u'] = "001";
    mp['v'] = "0001";
    mp['w'] = "011";
    mp['x'] = "1001";
    mp['y'] = "1011";
    mp['z'] = "1100";
    mp['0'] = "11111";
    mp['1'] = "01111";
    mp['2'] = "00111";
    mp['3'] = "00011";
    mp['4'] = "00001";
    mp['5'] = "00000";
    mp['6'] = "10000";
    mp['7'] = "11000";
    mp['8'] = "11100";
    mp['9'] = "11110";
    string s, ans = "";
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (isalpha(s[i])) {
            ans += mp[tolower(s[i])];
        } else if (isdigit(s[i])) {
            ans += mp[s[i]];
        }
    }
    cout << (is_palindrome(ans) && !ans.empty() ? "YES" : "NO");
    return 0;
}
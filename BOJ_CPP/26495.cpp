#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

string is_prime[11] = {

        {},

        {"0000\n"
         "0  0\n"
         "0  0\n"
         "0  0\n"
         "0000"
        },

        {"   1\n"
         "   1\n"
         "   1\n"
         "   1\n"
         "   1"
        },

        {
         "2222\n"
         "   2\n"
         "2222\n"
         "2\n"
         "2222"
        },

        {
         "3333\n"
         "   3\n"
         "3333\n"
         "   3\n"
         "3333"
        },

        {
         "4  4\n"
         "4  4\n"
         "4444\n"
         "   4\n"
         "   4"
        },

        {
         "5555\n"
         "5\n"
         "5555\n"
         "   5\n"
         "5555"
        },

        {
         "6666\n"
         "6\n"
         "6666\n"
         "6  6\n"
         "6666"
        },

        {
         "7777\n"
         "   7\n"
         "   7\n"
         "   7\n"
         "   7"
        },

        {
         "8888\n"
         "8  8\n"
         "8888\n"
         "8  8\n"
         "8888"
        },

        {
         "9999\n"
         "9  9\n"
         "9999\n"
         "   9\n"
         "   9"
        }
};

int main() {
    fastio;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        cout << is_prime[s[i] - '0' + 1] << "\n\n";
    }
    return 0;
}
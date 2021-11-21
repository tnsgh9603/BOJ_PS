#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

string conv[16]{"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ", "abc", "def", "ghi", "jkl", "mno", "pqrs",
                "tuv", "wxyz"};

int main() {
    fastio;
    string s;
    while (cin >> s && s != "#") {
        for (int i = 0; i < s.length(); ++i) {
            for (int j = 0; j < 16; ++j) {
                for (int k = 0; k < conv[j].length(); ++k) {
                    if (s[i] == conv[j][k]) {
                        int idx = k - (i + 1);
                        while(idx < 0) {
                            idx += conv[j].length();
                        }
                        cout << conv[j][idx % conv[j].length()];
                        goto hell;
                    }
                }
            }
            hell:;
        }
        cout << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2, temp = "";
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); ++i) {
        temp += s1[i];
        if (temp.length() >= s2.length()) {
            if (temp.substr(temp.length() - s2.length()) == s2) {
                temp.erase(temp.length() - s2.length());
            }
        }
    }
    cout << (temp.empty() ? "FRULA" : temp);
    return 0;
}
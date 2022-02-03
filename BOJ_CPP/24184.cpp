#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    string s;
    cin >> n >> ws;
    getline(cin, s);
    for (int i = 0; i < s.length() - 2; ++i) {
        if (string("aeiouy").find(s[i]) != -1 && s[i + 1] != ' ' && string("aeiouy").find(s[i + 1]) == -1 &&
            s[i + 2] != ' ' && string("aeiouy").find(s[i + 2]) == -1) {
            s.erase(s.begin() + i);
            --i;
        }
    }
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}
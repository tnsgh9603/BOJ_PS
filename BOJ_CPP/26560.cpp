#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    string s;
    getline(cin, s);
    T = stoi(s);
    while (T--) {
        getline(cin, s);
        if (s.back() != '.') {
            s += ".";
        }
        cout << s << '\n';
    }
    return 0;
}
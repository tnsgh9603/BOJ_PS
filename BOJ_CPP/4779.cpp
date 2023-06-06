#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string s[13];

int main() {
    fastio;
    int n;
    s[0] = "-";
    for (int i = 1; i <= 12; ++i) {
        s[i] = s[i - 1] + string(s[i - 1].length(), ' ') + s[i - 1];
    }
    while (cin >> n) {
        cout << s[n] << "\n";
    }
    return 0;
}
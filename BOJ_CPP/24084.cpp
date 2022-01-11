#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i + 1] == 'J') {
            cout << s[i] << "\n";
        }
    }
    return 0;
}
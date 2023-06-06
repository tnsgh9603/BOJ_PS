#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        char c = s[0];
        for (int j = 1; j < s.length(); ++j) {
            if(s[j] != c) {
                cout << c;
                c = s[j];
            }
        }
        cout << c << "\n";
    }
    return 0;
}
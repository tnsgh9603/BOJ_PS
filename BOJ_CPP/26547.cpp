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
        int len = s.length();
        if(len == 1) {
            cout << s << "\n";
            continue;
        }
        else if(len == 2) {
            cout << s << "\n";
            reverse(s.begin(), s.end());
            cout << s << "\n";
            continue;
        }
        cout << s << "\n";
        for (int j = 0; j < len - 2; ++j) {
            cout << s[j + 1];
            for (int k = 0; k < len - 2; ++k) {
                cout << ' ';
            }
            cout << s[s.length() - j - 2] << "\n";
        }
        reverse(s.begin(), s.end());
        cout << s;
        if (i != n - 1) {
            cout << "\n";
        }
    }
    return 0;
}
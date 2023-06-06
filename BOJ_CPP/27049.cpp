#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    int idx;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '?') {
            idx = i;
        }
    }
    for (int i = 0; i <= 10; ++i) {
        int sum = 0;
        for (int j = 0; j < s.length(); ++j) {
            int x;
            if (s[j] >= '0' && s[j] <= '9') {
                x = s[j] - '0';
            } else if (s[j] == '?') {
                x = i;
            } else if (s[j] == 'X') {
                x = 10;
            }
            sum += x * (10 - j);
        }
        if (sum % 11 == 0) {
            if (idx != 9 && i == 10) {
                continue;
            } else {
                if (i < 10) {
                    cout << i << "\n";
                } else {
                    cout << "X\n";
                }
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}

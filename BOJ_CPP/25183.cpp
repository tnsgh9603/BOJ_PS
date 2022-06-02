#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    int n;
    cin >> n >> s;
    for (int i = 0; i <= s.length() - 5; ++i) {
        bool flag = 1;
        for (int j = i; j < i + 4; ++j) {
            if (abs(s[j] - s[j + 1]) != 1) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
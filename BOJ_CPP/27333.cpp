#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    string s;
    cin >> n >> s;
    bool flag1 = 0, flag2 = 0, flag3 = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'j') {
            flag2 = 0;
            flag3 = 0;
            if (flag1) {
                flag1 = 0;
                s[i - 1] = 'J';
                s[i] = 'J';
            } else {
                flag1 = 1;
            }
        } else if (s[i] == 'o') {
            flag1 = 0;
            flag3 = 0;
            if (flag2) {
                flag2 = 0;
                s[i - 1] = 'O';
                s[i] = 'O';
            } else {
                flag2 = 1;
            }
        }
        if (s[i] == 'i') {
            flag1 = 0;
            flag2 = 0;
            if (flag3) {
                flag3 = 0;
                s[i - 1] = 'I';
                s[i] = 'I';
            } else {
                flag3 = 1;
            }
        }
    }
    cout << s;
    return 0;
}
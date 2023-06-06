#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    string s;
    cin >> n >> s;
    bool flag1 = 0, flag2 = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (!flag1 && s[i] == 'I') {
            flag1 = 1;
        } else if (flag1 && s[i] == 'O') {
            flag2 = 1;
        } else if (flag2 && s[i] == 'I') {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}
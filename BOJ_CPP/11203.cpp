#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int h;
    cin >> h;
    long long num = pow(2, h + 1) - 1;
    string s;
    cin >> s;
    int chk = 1;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'R') {
            chk = chk * 2 + 1;
        } else if (s[i] == 'L') {
            chk *= 2;
        }
    }
    cout << num - chk + 1;
}

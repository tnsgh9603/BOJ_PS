#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int conv[256];

int main() {
    fastio;
    int n;
    char c;
    string s;
    cin >> n >> c >> s;
    for (auto i: s) {
        ++conv[i];
    }
    char temp, mx = -1;
    for (int i = 0; i < 128; ++i) {
        if (mx < conv[i]) {
            mx = conv[i];
            temp = char(i);
        }
    }
    int diff = c - temp;
    for (auto i: s) {
        if (i == temp) {
            cout << c;
        } else if (char(i + diff) < 'A') {
            cout << char(i + diff + 26);
        } else if (char(i + diff) > 'Z') {
            cout << char(i + diff - 26);
        } else {
            cout << char(i + diff);
        }
    }
    return 0;
}
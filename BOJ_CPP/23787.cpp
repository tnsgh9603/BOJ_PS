#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    int mx = 0, cur = 0;
    for (char c: s) {
        if (c == '0') {
            ++cur;
        } else {
            cur = 0;
        }
        mx = max(mx, cur);
    }
    cout << (mx + 1) / 2;
    return 0;
}

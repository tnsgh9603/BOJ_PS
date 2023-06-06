#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    int n = 0, r = 0;
    for (int i = 0; i < s.length(); ++i) {
        n += (s[i] == '(' ? 1 : -1);
        r = min(r, n);
    }
    cout << n - 2 * r;
    return 0;
}

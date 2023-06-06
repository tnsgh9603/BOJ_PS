#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int i, n;
    string s;
    cin >> n >> s;
    if (n > 25) {
        string p = s.substr(10, n - 22);
        for (i = 0; i < p.size(); ++i) {
            if (p[i] == '.') {
                break;
            }
        }
        s = (i == p.size() ? s.substr(0, 11) + "..." + s.substr(n - 11) : s.substr(0, 9) + "......" + s.substr(n - 10));
    }
    cout << s;
    return 0;
}
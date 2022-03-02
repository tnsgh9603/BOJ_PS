#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int n, mx = 0;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 2; i < s.size(); ++i) {
            if (s.substr(i - 2, 3) == "for") {
                ++cnt;
            }
        }
        for (int i = 4; i < s.size(); ++i) {
            if (s.substr(i - 4, 5) == "while") {
                ++cnt;
            }
        }
        mx = max(mx, cnt);
    }
    cout << mx;
    return 0;
}
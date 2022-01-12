#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        if (i & 1) {
            if (s[i] != 'O') {
                ++cnt;
            }
        } else {
            if (s[i] != 'I') {
                ++cnt;
            }
        }
    }
    cout << cnt;
    return 0;
}
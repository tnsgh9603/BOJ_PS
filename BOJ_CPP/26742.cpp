#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'B') {
            ++cnt;
        }
    }
    cout << cnt / 2 + (s.length() - cnt) / 2;
    return 0;
}
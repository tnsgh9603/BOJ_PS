#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    int cnt = 0;
    for (char &c: s) {
        if (c == 'A') {
            ++cnt;
        }
    }
    cout << cnt << " : " << s.length() - cnt;
    return 0;
}
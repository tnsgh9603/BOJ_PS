#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, st, l, temp = 0, len;
    string s;
    cin >> s >> n;
    len = s.length();
    for (int i = 0; i < n; ++i) {
        cin >> st >> l;
        temp += st;
        len = l;
    }
    for (int i = temp; i < temp + len; ++i) {
        cout << s[i];
    }
    return 0;
}
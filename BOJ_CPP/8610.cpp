#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int cnt[26];

int main() {
    fastio;
    int n, mx = 0, t;
    char c;
    string s;
    cin >> n >> c >> s;
    for (char &i: s) {
        mx = max(mx, ++cnt[i - 'A']);
    }
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] == mx) {
            t = i;
        }
    }
    for (char &i: s) {
        i = (i - t + c - 104) % 26 + 'A';
    }
    cout << s;
    return 0;
}
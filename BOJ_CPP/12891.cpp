#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, a, c, g, t, q = 0, w = 0, e = 0, r = 0;
    string s;
    cin >> n >> m >> s >> a >> c >> g >> t;
    for (int i = 0; i < m; ++i) {
        if (s[i] == 'A') {
            ++q;
        } else if (s[i] == 'C') {
            ++w;
        } else if (s[i] == 'G') {
            ++e;
        } else {
            ++r;
        }
    }
    int cnt = 0, st = 0, en = m;
    while (en < n) {
        if (q >= a and w >= c and e >= g and r >= t) {
            ++cnt;
        }
        if (s[st] == 'A') {
            --q;
        } else if (s[st] == 'C') {
            --w;
        } else if (s[st] == 'G') {
            --e;
        } else {
            --r;
        }
        ++st;

        if (s[en] == 'A') {
            ++q;
        } else if (s[en] == 'C') {
            ++w;
        } else if (s[en] == 'G') {
            ++e;
        } else {
            ++r;
        }
        ++en;
    }
    if (q >= a and w >= c and e >= g and r >= t) {
        ++cnt;
    }
    cout << cnt;
    return 0;
}
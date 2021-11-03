#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

#define ft first
#define sd second

int main() {
    fastio;
    pair<char, int> p1, p2;
    cin >> p1.ft >> p1.sd >> p2.ft >> p2.sd;
    p1.ft -= 'A';
    p2.ft -= 'A';
    --p1.sd;
    --p2.sd;
    int n, c, d, e, f;
    cin >> n;
    while (n--) {
        c = p1.ft, d = p1.sd, e = p2.ft, f = p2.sd;
        string s;
        cin >> s;
        for (char i: s) {
            if (i == 'R') {
                ++c;
                ++e;
            }
            else if (i == 'L') {
                --c;
                --e;
            }
            else if (i == 'B') {
                --d;
                --f;
            }
            else if (i == 'T') {
                ++d;
                ++f;
            }
        }
        if (c >= 0 && c < 8 && d >= 0 && d < 8) {
            if (c == p2.ft && d == p2.sd) {
                if (e < 0 || e >= 8 || f < 0 || f >= 8) {
                    continue;
                }
                p2.ft = e, p2.sd = f;
            }
            p1.ft = c, p1.sd = d;
        }
    }
    cout << (char)(p1.ft + 'A') << p1.sd + 1 << "\n" << (char)(p2.ft + 'A') << p2.sd + 1;
    return 0;
}
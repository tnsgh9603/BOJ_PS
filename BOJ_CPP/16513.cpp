#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long i, j, k = 0, p, q, r = 0, X, Y, A = 0, B = 0, C;
    string s;
    cin >> s >> C;
    j = s.length();
    for (int i = 0; i < j; ++i) {
        k += r;
        if (s[i] == '.') r = 1;
        else {
            if (r == 0) {
                A *= 10;
                A += (s[i] - '0');
            } else if (r == 1) {
                B *= 10;
                B += (s[i] - '0');
            }
        }
    }
    j = B;
    for (i = 0, p = 1; i < k; ++i, p *= 10);
    for (j = 0, q = 1; j < C; ++j, q *= 10);
    for (i = 0, r = 1; i < (k - C); ++i, r *= 10);
    Y = p - r;
    X = (A * p + B) - (A * r + B / q);
    k = gcd(X, Y);
    cout << X / k << "/" << Y / k;
    return 0;
}
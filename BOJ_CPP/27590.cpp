#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a *= -1;
    c *= -1;
    while (1) {
        if (a == c) {
            cout << a;
            break;
        }
        if (a > c) {
            c += d;
        } else {
            a += b;
        }
    }
    return 0;
}
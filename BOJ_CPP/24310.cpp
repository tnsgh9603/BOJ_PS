#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d, temp1, temp2;
    cin >> a >> b >> c >> d;
    temp1 = a, temp2 = b;
    a = min(temp1, temp2), b = max(temp1, temp2);
    temp1 = c, temp2 = d;
    c = min(temp1, temp2), d = max(temp1, temp2);
    if (c <= a) {
        if (d < a) {
            cout << d - c + b - a + 2;
        } else if (a <= d && d <= b) {
            cout << b - c + 1;
        } else {
            cout << d - c + 1;
        }
    } else if (a <= c && c <= b) {
        if (d <= b) {
            cout << b - a + 1;
        } else {
            cout << d - a + 1;
        }
    } else {
        cout << d - c + b - a + 2;
    }
    return 0;
}
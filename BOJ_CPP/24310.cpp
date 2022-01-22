#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d, sum = 0, temp;
    cin >> a >> b >> c >> d;
    temp = a;
    a = min(a, d);
    d = max(temp, d);
    temp = b;
    b = min(b, c);
    c = max(temp, c);
    if (b <= a) {
        if (c <= a) {
            sum = d - a + c - b;
        } else {
            sum = max(d, c) - b;
        }
    } else if (a < b && b <= d) {
        if (c <= d) {
            sum = d - a;
        } else {
            sum = c - a;
        }
    } else {
        sum = c - b + d - a;
    }
    cout << sum;
    return 0;
}
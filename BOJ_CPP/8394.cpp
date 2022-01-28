#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, t, a = 1, b = 1;
    cin >> n;
    while (--n) {
        t = b;
        b = (b + a) % 10;
        a = t;
    }
    cout << b;
    return 0;
}
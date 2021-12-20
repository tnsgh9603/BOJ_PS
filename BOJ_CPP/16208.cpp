#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long n, a, b = 0, c = 0;
    cin >> n;
    while (n--) {
        cin >> a;
        c += a * b;
        b += a;
    }
    cout << c;
    return 0;
}
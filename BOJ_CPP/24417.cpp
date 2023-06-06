#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    fastio;
    int n, a, b, c;
    a = b = 1;
    cin >> n;
    for (int i = 0; i < n - 2; ++i) {
        c = b;
        b = (a + b) % MOD;
        a = c;
    }
    cout << b << " " << n - 2;
    return 0;
}
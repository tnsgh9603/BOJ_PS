#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, a = 1, b = 1, c;
    cin >> n;
    for (int i = 0; i < n - 2; ++i) {
        c = b;
        b = a + b;
        a = c;
    }
    cout << b << " " << n - 2;
    return 0;
}
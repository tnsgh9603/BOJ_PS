#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, i = 1, k = 1, r = 9;
    cin >> n;
    for (;; ++i) {
        n -= k;
        if (i == r) {
            ++k;
            r = r * 10 + 9;
        }
        if (n <= 0) {
            break;
        }
    }
    while (n != 0) {
        ++n;
        i /= 10;
    }
    cout << i % 10;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, j;
    cin >> n;
    int a = 1, b = n;
    for (int i = 2; i <= sqrt(n); ++i) {
        j = n / i;
        if (i * j < n) {
            ++j;
        }
        if (i + j < a + b) {
            a = i;
            b = j;
        }
    }
    cout << a << " " << b;
    return 0;
}

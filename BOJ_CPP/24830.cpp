#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long long n, prev = 1, a, c;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char b;
        cin >> a >> b >> c;
        if (b == '+') {
            prev = a + c - prev;
        } else if (b == '-') {
            prev = (a - c) * prev;
        } else if (b == '/') {
            prev = (a & 1 ? (a + 1) / 2 : a / 2);
        } else {
            prev = a * a * c * c;
        }
        cout << prev << "\n";
    }
    return 0;
}
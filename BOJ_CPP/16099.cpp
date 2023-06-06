#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << (a * b == c * d ? "Tie" : a * b < c * d ? "Eurecom" : "TelecomParisTech") << (i == n - 1 ? "" : "\n");
    }
    return 0;
}
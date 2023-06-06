#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << tc << ": " << ((b & ((1 << a) - 1)) == (1 << a) - 1 ? "ON" : "OFF") << "\n";
    }
    return 0;
}
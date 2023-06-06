#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        cout << ((y - x) % (a + b) ? -1 : (y - x) / (a + b)) << "\n";
    }
    return 0;
}
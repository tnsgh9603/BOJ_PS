#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a + b == c || max(a, b) - min(a, b) == c || a * b == c ||
                 max(a, b) / min(a, b) == c && max(a, b) % min(a, b) == 0 ? "Possible" : "Impossible") << "\n";
    }
    return 0;
}
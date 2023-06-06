#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, a, b, c;
    cin >> n;
    while(n--) {
        cin >> a >> b >> c;
        cout << (c & 1 and !a or a + 2 * b < c ? "NO" : "YES") << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int a, b;
        cin >> a >> b;
        cout << "Case " << tc << ": " << max(0, b - a + 1) << "\n";
    }
    return 0;
}
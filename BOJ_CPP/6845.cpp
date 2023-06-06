#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, y, m, d;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> y >> m >> d;
        cout << (y < 1989 || y == 1989 && m < 2 || y == 1989 && m == 2 && d <= 27 ? "Yes" : "No") << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    while (cin >> n >> m && n) {
        int ba, bb;
        cin >> ba >> bb;
        for (int i = 1; i < n; ++i) {
            int a, b;
            cin >> a >> b;
            if (a <= m && (ba > m || (b * ba < a * bb || (b * ba == a * bb && a > ba)))) {
                ba = a;
                bb = b;
            }
        }
        if (ba <= m) {
            cout << "Buy " << ba << " tickets for $" << bb << "\n";
        } else {
            cout << "No suitable tickets offered\n";
        }
    }
    return 0;
}
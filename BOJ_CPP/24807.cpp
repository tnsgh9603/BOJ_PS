#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int n = 500;
    bool flag = 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            for (int k = 0; k <= n; ++k) {
                if (i * a + j * b + k * c == d) {
                    cout << i << " " << j << " " << k << "\n";
                    flag = 1;
                }
            }
        }
    }
    if (!flag) {
        cout << "impossible";
    }
    return 0;
}
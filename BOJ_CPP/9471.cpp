#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int p, n, m;
    cin >> p;
    while (p--) {
        cin >> n >> m;
        int a = 1, b = 1, c, cnt = 1;
        while (a != 0 || b != 1) {
            c = (a + b) % m, a = b, b = c, ++cnt;
        }
        cout << n << " " << cnt << "\n";
    }
    return 0;
}
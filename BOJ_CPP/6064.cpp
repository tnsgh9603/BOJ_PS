#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int m, n, x, y;
        cin >> m >> n >> x >> y;
        bool flag = 1;
        for (int i = 0; i <= lcm(m, n); i += m) {
            int temp = ((x + i) % n == 0 ? n : (x + i) % n);
            if (temp == y) {
                cout << i + x << "\n";
                flag = 0;
                break;
            }
        }
        if (flag) {
            cout << "-1\n";
        }
    }
    return 0;
}
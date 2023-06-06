#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, cnt = 0;
        cin >> a >> b;
        while (b--) {
            cin >> c;
            if (c > a) {
                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
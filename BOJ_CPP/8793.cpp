#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n, y = 0, z = 0;
        cin >> n;
        while (n--) {
            int x;
            cin >> x;
            z += x;
            if (z < 0) {
                ++z;
                ++y;
            }
        }
        cout << z + y << "\n";
    }
    return 0;
}
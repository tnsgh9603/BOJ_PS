#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int v[4];

int main() {
    fastio;
    while (cin >> v[0] >> v[1] >> v[2] >> v[3]) {
        while (1) {
            sort(v, v + 4, greater<>{});
            int i = 0;
            while (i + 1 < 4 && v[i + 1]) {
                ++i;
            }
            if (!i) {
                break;
            }
            for (int j = i - 1; j >= 0; --j) {
                v[j] -= v[i];
            }
        }
        if (v[0]) {
            cout << v[0] << '\n';
        } else {
            break;
        }
    }
    return 0;
}
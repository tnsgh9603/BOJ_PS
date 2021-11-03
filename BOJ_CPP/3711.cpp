#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int chk[1'000'001];

int main() {
    fastio;
    int n, j, g, a[301];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> g;
        for (j = 0; j < g; ++j) {
            cin >> a[j];
        }
        for (j = 1; j < 1000001; ++j) {
            int c = 0;
            for (int k = 0; k < g; ++k) {
                chk[a[k] % j] = 0;
            }
            for (int k = 0; k < g; ++k) {
                if (chk[a[k] % j] == 1) {
                    c = 1;
                }
                chk[a[k] % j] = 1;
            }
            if (!c) {
                break;
            }
        }
        cout << j << "\n";
    }
    return 0;
}
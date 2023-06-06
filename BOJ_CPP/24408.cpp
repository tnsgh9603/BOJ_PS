#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, k;
    cin >> n >> m;
    bool flag = 0;
    for (int i = 1; i < n; ++i) {
        cin >> k;
        if (flag) {
            m = k;
            flag = 0;
        } else if (k % m == 0) {
            cout << k << "\n";
            flag = 1;
        }
    }
    return 0;
}
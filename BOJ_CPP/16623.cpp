#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, k, now = 0, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> k;
        if (k < now) {
            ++cnt;
        }
        now = k;
    }
    cout << cnt;
    return 0;
}
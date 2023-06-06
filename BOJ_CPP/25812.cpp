#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, r, m, cnt = 0;
    cin >> n >> r;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        cnt += (m < r ? -1 : 1);
    }
    cout << (cnt == 0 ? 0 : cnt < 0 ? 1 : 2);
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    int res = 0, cur = m;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (cur + x <= m) {
            cur += x;
        } else {
            ++res;
            cur = x;
        }
    }
    cout << res;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int cnt[10001];

int main() {
    fastio;
    int n, m, mx = 0;
    cin >> n;
    while (n--) {
        cin >> m;
        ++cnt[m];
    }
    for (int i = 0; i < 10000; ++i) {
        mx = max(mx, cnt[i]);
    }
    cout << mx;
    return 0;
}
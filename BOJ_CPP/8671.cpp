#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, mx = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        mx = min(m, mx);
    }
    cout << mx << ".00";
    return 0;
}
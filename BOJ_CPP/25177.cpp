#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int a[1001], b[1001];

int main() {
    fastio;
    int n, m, mx = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < m; ++i) {
        mx = (b[i] - a[i] > mx ? b[i] - a[i] : mx);
    }
    cout << mx;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int mn[100'001];

int main() {
    fastio;
    int n;
    cin >> n;
    fill(mn, mn + n + 1, INT_MAX);
    mn[0] = 0, mn[1] = 1, mn[2] = 2;
    for (int i = 3; i <= n; ++i) {
        for (int j = 1; j <= int(sqrt(i)); ++j) {
            mn[i] = min(mn[i], mn[i - j * j] + 1);
        }
    }
    cout << mn[n];
    return 0;
}
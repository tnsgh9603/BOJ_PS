#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int a[10001];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int i = 0, j = 0, m = 0;
    a[n] = 2e9;
    while (j <= n) {
        if (a[j] - a[i] < 5) {
            ++j;
        } else {
            m = max(m, j - i);
            ++i;
        }
    }
    cout << 5 - m;
    return 0;
}
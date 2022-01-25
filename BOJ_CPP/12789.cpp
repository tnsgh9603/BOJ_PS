#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int n, m = 1, a[1001], x, t;

int main() {
    fastio;
    cin >> n;
    for (int i = 0; i <= n; ++i) {
        if (i < n) {
            cin >> x;
            a[++t] = x;
        }
        while (t && a[t] == m) {
            --t;
            ++m;
        }
    }
    cout << (t ? "Sad" : "Nice");
    return 0;
}
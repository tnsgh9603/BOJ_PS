#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    int n, x, ans = 0;
    cin >> n;
    scanf(" $%*d.%d", &x);
    for (int i = 1; i <= n; ++i) {
        int a;
        scanf(" $%*d.%d", &a);
        x += a;
        if (x % 100) {
            ++ans;
        }
    }
    cout << ans;
    return 0;
}
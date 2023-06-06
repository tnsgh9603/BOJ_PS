#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve(int n) {
    if (n == 0) {
        return;
    }
    int q = n / (-2);
    int r = n - q * (-2);
    if (r < 0) {
        ++q;
        r = 1;
    }
    solve(q);
    cout << r;
}
int main() {
    fastio;
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0;
    }
    solve(n);
    return 0;
}
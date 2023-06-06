#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, a, b;
    cin >> n >> a >> b;
    if (n == 1) {
        cout << 0;
    } else if (n == 2) {
        cout << 2;
    } else {
        int cnt = 0;
        if (a == 1 || a == n) {
            ++cnt;
        }
        if (b == 1 || b == n) {
            ++cnt;
        }
        cout << 4 - cnt;
    }
    return 0;
}
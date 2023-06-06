#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    while (a != b) {
        ++cnt;
        int mn = min(a, b), mx = max(a, b);
        a = mx - mn;
        b = mn;
    }
    cout << cnt;
    return 0;
}
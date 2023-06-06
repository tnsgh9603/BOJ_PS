#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, now = 0, mn = 0;
    cin >> n;
    while (n--) {
        cin >> m;
        now += m;
        mn = min(mn, now);
    }
    cout << abs(mn);
    return 0;
}
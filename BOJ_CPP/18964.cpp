#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, cnt1 = 0, cnt2 = 0;
    cin >> n;
    while (n--) {
        cin >> m;
        ++(m & 1 ? cnt1 : cnt2);
    }
    cout << 2 << " " << (cnt1 >= cnt2 ? 1 : 0);
    return 0;
}
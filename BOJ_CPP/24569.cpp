#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, cnt = 0, a, b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (a * 5 - b * 3 > 40) {
            ++cnt;
        }
    }
    cout << cnt << (cnt == n ? "+" : "");
    return 0;
}
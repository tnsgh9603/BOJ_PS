#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i <= n / 4; ++i) {
        if ((n - 4 * i) % 5 == 0) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
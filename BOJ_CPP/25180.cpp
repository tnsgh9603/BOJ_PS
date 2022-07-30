#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, ans = 0;
    cin >> n;
    for (int i = 9; i >= 2; --i) {
        if (n <= 9) {
            ++ans;
            cout << ans;
            return 0;
        }
        while (n >= i * 2) {
            n -= i * 2;
            ans += 2;
            if (n == 0) {
                cout << ans;
                return 0;
            } else if (n <= 9) {
                ++ans;
                cout << ans;
                return 0;
            }
        }
    }
    cout << ans;
    return 0;
}
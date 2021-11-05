#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[5] = {1, 4, 9, 121, 484};

int main() {
    fastio;
    int tc, i = 1;
    cin >> tc;
    while (tc--) {
        int ans = 0, l, r;
        cin >> l >> r;
        for (int i = 0; i < 5; ++i) {
            if (l <= arr[i] && arr[i] <= r) {
                ++ans;
            }
        }
        cout << "Case #" << i++ << ": " << ans << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int N, ans = 0;
        ll C, sum = 0;
        cin >> N >> C;
        while (sum < N * C) {
            ++ans;
            ll temp = sum / N + 1;
            sum += temp;
        }
        cout << "Case #" << tc << ": " << ans << "\n";
    }
    return 0;
}
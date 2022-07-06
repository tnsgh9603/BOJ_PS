#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int K;
    cin >> K;
    for (int tc = 0; tc < K; ++tc) {
        cout << "Data Set " << tc + 1 << ": \n";
        int n, s, d;
        cin >> n >> s >> d;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int di, vi;
            cin >> di >> vi;
            if ((double) di / s <= d) {
                ans += vi;
            }
        }
        cout << ans << "\n\n";
    }
    return 0;
}
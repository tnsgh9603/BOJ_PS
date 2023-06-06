#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        int n, m;
        cin >> n >> m;
        string hotel[101], type[101];
        int bed[101], room[101], cost[101], allow[101];
        for (int i = 0; i < n; ++i) {
            cin >> bed[i] >> allow[i] >> room[i] >> cost[i] >>  hotel[i];
            type[i] = (bed[i] >= 20 && bed[i] <= 35 ? 'A' : bed[i] >= 36 && bed[i] <= 48 ? 'B' : bed[i] >= 49 &&
                                                                                                 bed[i] <= 62 ? 'C'
                                                                                                              : type[i]);
        }
        cout << "Case #" << tc << ":\n";
        while (m--) {
            string a;
            int b, c, idx = -1, ans = 0;
            cin >> a >> b >> c;
            for (int i = 0; i < n; ++i) {
                if (a[0] != type[i] or min(allow[i], c) * room[i] < b) {
                    continue;
                }
                int lo = min(allow[i], c), use = (b + lo - 1) / lo;
                if (idx == -1 || use * cost[i] < ans || (use * cost[i] == ans && bed[i] > bed[idx])) {
                    idx = i, ans = use * cost[i];
                }
            }
            if (idx != -1) printf("%d %board\n", ans, hotel[idx]);
            else puts("no-hotel");
        }
    }
    return 0;
}
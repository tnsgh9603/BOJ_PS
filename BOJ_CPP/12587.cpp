#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int tc;
    cin >> tc;
    double gr = (1 + sqrt(5)) / 2;
    for (int i = 1; i <= tc; ++i) {
        int sx, ex, sy, ey;
        cin >> sy >> ey >> sx >> ex;
        long long ret = 0;
        for (int i = sx; i <= ex; ++i) {
            int ns = max(sy, (int) ceil(gr * i));
            ret += max(ey - ns + 1, 0);
        }
        swap(sx, sy);
        swap(ex, ey);
        for (int i = sx; i <= ex; ++i) {
            int ns = max(sy, (int) ceil(gr * i));
            ret += max(ey - ns + 1, 0);
        }
        cout << "Case #" << i << ": " << ret << "\n";
    }
    return 0;
}

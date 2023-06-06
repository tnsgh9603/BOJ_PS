#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
#define x first
#define y second
pair<int, int> P[1001];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> P[i].x >> P[i].y;
    }
    sort(P, P + n);
    int R = INT_MAX;
    for (int i = 0; i + 1 < n; ++i) {
        if (P[i].y xor P[i + 1].y) {
            R = min(R, P[i + 1].x - P[i].x);
        }
    }
    --R;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (P[i].y) {
            ans += (i == 0) or !P[i - 1].y or (P[i - 1].x < P[i].x - R);
        }
    }
    cout << ans;
    return 0;
}
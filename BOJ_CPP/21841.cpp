#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int P, W, N, idx, cnt1 = 0, cnt2 = 0;
    char dir;
    cin >> P >> W >> N;
    for (int i = 0; i < N; ++i) {
        cin >> dir >> idx;
        ++(dir == 'P' ? cnt1 : cnt2);
    }
    cout << cnt2 * W + cnt1 * P - cnt1 * cnt2;
    return 0;
}
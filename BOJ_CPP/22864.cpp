#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int ans = 0, A, B, C, M, N = 0;
    cin >> A >> B >> C >> M;
    for (int i = 24; i--;) {
        if (M < N + A) {
            N = (N < C ? 0 : N - C);
        } else {
            N += A;
            ans += B;
        }
    }
    cout << ans;
    return 0;
}
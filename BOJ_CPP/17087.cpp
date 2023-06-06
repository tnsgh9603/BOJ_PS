#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N, S, ans = 0;
    cin >> N >> S;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        ans = gcd(abs(x - S), ans);
    }
    cout << ans;
    return 0;
}

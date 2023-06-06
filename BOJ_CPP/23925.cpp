#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; ++tc) {
        int N, K, S;
        cin >> N >> K >> S;
        cout << "Case #" << tc << ": " << K - 1 + min(K - S + N - S + 1, 1 + N) << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc) {
        string s;
        long long i, j;
        cin >> s >> i >> j;
        int n = s.length();
        --i;
        --j;
        long long qi = i / n, ri = i % n, qj = j / n, rj = j % n, ans;
        ans = (qi < qj ? (qj - qi - 1) * count(s.begin(), s.end(), 'B') + count(s.begin() + ri, s.end(), 'B') +
                         count(s.begin(), s.begin() + rj + 1, 'B') : count(s.begin() + ri, s.begin() + rj + 1, 'B'));
        cout << "Case #" << tc << ": " << ans << "\n";
    }
    return 0;
}
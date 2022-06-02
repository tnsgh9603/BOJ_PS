#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int is_prime[15001];

int main() {
    fastio;
    int n, m, s, e, ans = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> is_prime[i];
    }
    s = 0;
    e = n - 1;
    sort(is_prime, is_prime + n);
    while (s < e) {
        if (is_prime[s] + is_prime[e] == m) {
            ++ans;
            --e;
            ++s;
        }
        if (is_prime[s] + is_prime[e] > m) {
            --e;
        }
        if (is_prime[s] + is_prime[e] < m) {
            ++s;
        }
    }
    cout << ans;
    return 0;
}
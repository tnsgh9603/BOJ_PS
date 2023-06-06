#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int is_prime[2001];
bool is_prime[2001];
int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        ++is_prime[k];
    }
    int ans = 0;
    for (int i = 0; i < m; ++i) {
        int k;
        cin >> k;
        if(!is_prime[k]) {
            is_prime[k] = 1;
            ans += is_prime[k];
        }
    }
    cout << ans;
    return 0;
}
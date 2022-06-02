#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int is_prime[2001];
int main() {
    fastio;
    int n, m,mn=INT_MAX,idx;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        ++is_prime[m];
    }
    for (int i = 1; i <= 2000; ++i) {
        if(is_prime[i] && mn > is_prime[i]) {
            mn = is_prime[i];
            idx = i;
        }
    }
    cout << idx;
    return 0;
}
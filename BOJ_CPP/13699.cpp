#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

long long is_prime[36] = {1};

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            is_prime[i] += is_prime[j] * is_prime[i - j - 1];
        }
    }
    cout << is_prime[n];
    return 0;
}

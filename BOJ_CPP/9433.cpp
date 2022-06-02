#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int is_prime[21];

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        for (int i = 0; i < 20; ++i) {
            cin >> is_prime[i];
        }
        for (int i = 19; i > 0; --i) {
            if (is_prime[i] % 2 == 0) {
                is_prime[i - 1] += is_prime[i] / 2;
                is_prime[i] = 0;
            } else {
                is_prime[i - 1] += is_prime[i] / 2;
                is_prime[i] = 1;
            }
        }
        for (int i = 0; i < 20; ++i) {
            cout << is_prime[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
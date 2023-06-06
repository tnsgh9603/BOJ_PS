#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int is_prime[10];

int main() {
    fastio;
    int n, d;
    cin >> n >> d;
    vector<int> v(d);
    iota(v.begin(), v.end(), 0);
    do {
        if (v[0] == 0) {
            continue;
        }
        int sum = 0;
        for (int i = d - 1; i >= 0; --i) {
            int temp = 1;
            for (int j = 1; j <= d - i - 1; ++j) {
                temp *= d;
            }
            sum += temp * v[i];
        }
        if (sum > n) {
            cout << sum;
            return 0;
        }
    } while (next_permutation(v.begin(), v.end()));
    cout << -1;
    return 0;
}
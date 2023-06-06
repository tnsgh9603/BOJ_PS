#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[1'000'001];

int main() {
    fastio;
    int n, p, mx = -INT_MAX;
    cin >> n >> p;
    while (p--) {
        int k, sum = 0;
        cin >> k;
        for (int i = k; i <= n; i += k) {
            arr1[i] ^= 1;
        }
        for (int i = 1; i <= n; ++i) {
            sum += arr1[i];
        }
        mx = max(mx, sum);
    }
    cout << mx;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int pSum[100'001];

int main() {
    fastio;
    int n, k, mx = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        pSum[i + 1] = pSum[i] + v[i];
    }
    for (int i = 0; i < n; ++i) {
        if (i + k >= n) {
            mx = max(mx, pSum[n] - pSum[i] + pSum[(i + k) % n]);
        } else {
            mx = max(mx, pSum[i + k] - pSum[i]);
        }
    }
    cout << mx;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[100'001];

int main() {
    fastio;
    int k, r, n;
    cin >> k >> r;
    for (int i = 0; i < k; ++i) {
        cin >> arr[i];
    }
    int ans = -INT_MAX;
    for (int i = 0; i < r; ++i) {
        int mn = INT_MAX;
        for (int j = 0; j < k; ++j) {
            cin >> n;
            if(n == 0) {
                continue;
            }
            mn = min(mn, arr[j] / n);
        }
        cin >> n;
        ans = max(ans, n * mn);
    }
    cout << ans;
    return 0;
}
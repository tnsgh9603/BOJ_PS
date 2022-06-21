#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[100'001];

int main() {
    fastio;
    int n, k, ans = -1e7;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    for (int i = k; i <= n; ++i) {
        if (ans < arr[i] - arr[i - k]) {
            ans = arr[i] - arr[i - k];
        }
    }
    cout << ans;
    return 0;
}

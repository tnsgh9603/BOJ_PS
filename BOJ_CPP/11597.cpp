#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[100'001];

int main() {
    int n, ans = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n / 2; ++i) {
        ans = min(ans, arr[i] + arr[n - 1 - i]);
    }
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[100'001];

int main() {
    fastio;
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i) {
        ans = max(ans, arr[i] * (n - i));
    }
    cout << ans;
    return 0;
}
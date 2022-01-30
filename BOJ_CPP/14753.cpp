#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[10001];

int main() {
    fastio;
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    arr[n] = 1;
    sort(arr, arr + n + 1);
    x = arr[n] * arr[n - 1] * arr[n - 2];
    y = arr[n] * arr[0] * arr[1];
    cout << (x > y ? x : y);
    return 0;
}
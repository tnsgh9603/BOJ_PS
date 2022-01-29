#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
double arr[100'001], sum;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = k; i < n - k; ++i) {
        sum += arr[i];
    }
    cout << fixed << setprecision(2) << sum / (n - 2 * k) + 1e-9 << "\n";
    sum += arr[k] * k + arr[n - k - 1] * k;
    cout << fixed << setprecision(2) << sum / n + 1e-9 << "\n";
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[1001];

int main() {
    fastio;
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }
    sort(arr1, arr1 + n);
    for (int i = (n + 1) / 2; i < n; ++i) {
        sum += arr1[i];
    }
    cout << sum;
    return 0;
}
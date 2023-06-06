#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[101], brr[101];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        sort(arr, arr + n);
        brr[i] = arr[n / 2];
    }
    sort(brr, brr + n);
    cout << brr[n / 2];
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[101];

int main() {
    fastio;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    int m = (N - 1) / 2, d = 0;
    for (int i = 0; i < N; ++i) {
        cout << arr[m + d] << " ";
        d = (d <= 0) - d;
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
int arr[21];

int main() {
    fastio;
    int n, temp = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i) {
        if (arr[i] > temp + 1) {
            cout << temp + 1;
            return 0;
        }
        temp += arr[i];
    }
    cout << temp + 1;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[1'000'001];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr1[i];
    }
    for (int i = 1; i < n; ++i) {
        if (arr1[i] && arr1[i] == arr1[i + 1]) {
            cout << -1;
            return 0;
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (!arr1[i]) {
            arr1[i] = arr1[i - 1] % 3 + 1;
            if (arr1[i] == arr1[i + 1]) {
                arr1[i] = arr1[i] % 3 + 1;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << arr1[i] << " ";
    }
    return 0;
}
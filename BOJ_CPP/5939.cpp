#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[5001];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int h, m, s;
        cin >> h >> m >> s;
        arr[i] = 3600 * h + 60 * m + s;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] / 3600 << " " << arr[i] % 3600 / 60 << " " << arr[i] % 60 << "\n";
    }
    return 0;
}
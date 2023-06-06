#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[101];

int main() {
    fastio;
    int n, g;
    cin >> n >> g;
    int p = 0;
    for (int i = 0; i < g; ++i) {
        int flag;
        cin >> flag;
        while (flag) {
            if (p == n) {
                p = 0;
            }
            int temp = min(flag + arr[p], 2);
            flag -= temp - arr[p];
            arr[p] += temp - arr[p];
            ++p;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << "\n";
    }
    return 0;
}
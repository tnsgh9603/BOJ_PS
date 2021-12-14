#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1001];

int main() {
    fastio;
    int n;
    cin >> n;
    int m = n, t = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    while (m) {
        for (int i = 0; i < n; ++i) {
            if (arr[i] > 0) {
                --arr[i];
                ++t;
            }
            if (!arr[i]) {
                arr[i] = -t;
                --m;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << -arr[i] << " ";
    }
    return 0;
}
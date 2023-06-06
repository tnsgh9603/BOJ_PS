#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[100];

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        for (int j = 1; j <= n; ++j) {
            cin >> arr[j];
        }
        int sum = 0, mx = 0, mi, cnt = 0;
        for (int j = 1; j <= n; ++j) {
            if (arr[j] > mx) {
                mx = arr[j];
                mi = j;
            }
            sum += arr[j];
        }
        for (int j = 1; j <= n; ++j) {
            if (arr[j] == mx) {
                ++cnt;
            }
        }
        cout << (cnt > 1 ? "no winner" : sum / 2 < mx ? "majority winner " + to_string(mi) : "minority winner " +
                                                                                             to_string(mi)) << "\n";
    }
    return 0;
}
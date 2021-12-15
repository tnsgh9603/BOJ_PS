#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[1'000'001];
int main() {
    fastio;
    for (int d = 1; d <= 1'000'000; ++d) {
        for (int i = d + d; i <= 1'000'000; i += d) {
            arr[i] += d;
        }
    }
    int tc, x;
    cin >> tc;
    while (tc--) {
        cin >> x;
        cout << (arr[x] > x ? "abundant" : arr[x] == x ? "perfect" : "deficient") << "\n";
    }
    return 0;
}
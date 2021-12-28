#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

long long arr[5001];

int main() {
    fastio;
    int n, ans = 2;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 2; j < n; ++j) {
            if ((arr[j - 1] - arr[j - 2]) * (arr[j - 1] - arr[j]) <= 0) {
                break;
            }
            ans = max(j - i + 1, ans);
        }
    }
    cout << ans;
    return 0;
}
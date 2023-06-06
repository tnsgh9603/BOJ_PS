#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
pair<string, int> arr1[1001];

int main() {
    fastio;
    for (int tc = 1;; ++tc) {
        int n, ans = 0;
        cin >> n;
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; ++i) {
            cin >> arr1[i].first;
            arr1[i].second = i;
        }
        sort(arr1, arr1 + n);
        for (int i = 0; i < n; ++i) {
            ans += abs(arr1[i].second - i);
        }
        cout << "Site " << tc << ": " << ans << "\n";
    }
    return 0;
}

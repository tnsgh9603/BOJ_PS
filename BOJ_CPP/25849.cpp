#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[6] = {1, 5, 10, 20, 50, 100};

int main() {
    fastio;
    int mx = 0, ans = 1;
    for (int i = 0; i < 6; ++i) {
        int n;
        cin >> n;
        if (mx <= n * arr1[i]) {
            mx = n * arr1[i];
            ans = arr1[i];
        }
    }
    cout << ans;
    return 0;
}
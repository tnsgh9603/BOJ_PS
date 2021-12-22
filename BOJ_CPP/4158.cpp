#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[1'000'001];

int main() {
    fastio;
    int n, m;
    while (cin >> n >> m && n) {
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        for (int i = 0; m-- > 0;) {
            int b;
            cin >> b;
            while (i < n && arr[i] < b) {
                ++i;
            }
            if (i < n && arr[i] == b) {
                ++i;
                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
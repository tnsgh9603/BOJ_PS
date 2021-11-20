#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr[101], cnt[3];

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int a;
        cin >> a;
        arr[a] = i % 2 + 1;
        if (arr[a - 1] && arr[a - 1] != arr[a]) {
            int x = a - 1;
            while (x > 1 && arr[x - 1] == arr[a - 1]) {
                --x;
            }
            if (arr[x - 1] == arr[a]) {
                fill(arr + x, arr + a, 0);
            }
        }
        if (arr[a + 1] && arr[a + 1] != arr[a]) {
            int x = a + 1;
            while (x < n && arr[x + 1] == arr[a + 1]) {
                ++x;
            }
            if (arr[x + 1] == arr[a]) {
                fill(arr + a + 1, arr + x + 1, 0);
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        ++cnt[arr[i]];
    }
    cout << cnt[2] << " " << cnt[1];
    return 0;
}
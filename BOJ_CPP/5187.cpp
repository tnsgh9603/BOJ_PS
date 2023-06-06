#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr[20001];

int main() {
    fastio;
    int k;
    cin >> k;
    for (int j = 0; j < k; ++j) {
        int m, n;
        cin >> m >> n;
        for (int i = 0; i < m; ++i) {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            int h, w, d, idx;
            cin >> h >> w >> d >> idx;
            sum += h * w * d * arr[idx - 1];
        }
        cout << "Data Set " << j + 1 << ":\n" << sum << "\n";
    }
    return 0;
}
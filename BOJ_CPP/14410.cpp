#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

ll arr[300'001], sum;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n);
    reverse(arr, arr + n);
    double ret = 0, pa = 0, pb = 0;
    for (int i = 0; i < n; ++i) {
        if (i) {
            arr[i] += arr[i - 1];
        }
        double p = 1.0 * arr[i] / sum - 1.0 * (i + 1) / n;
        if (ret < p) {
            ret = p;
            pa = 1.0 * arr[i] / sum;
            pb = 1.0 * (i + 1) / n;
        }
    }
    cout << fixed << setprecision(10) << 100 * pb << "\n" << 100 * pa;
    return 0;
}
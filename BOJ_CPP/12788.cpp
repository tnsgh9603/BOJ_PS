#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int a[1001];

int main() {
    fastio;
    int n, m, k, sum = 0;
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 0; --i) {
        sum += a[i];
        if (sum >= m * k) {
            cout << n - i;
            return 0;
        }
    }
    cout << "STRESS";
    return 0;
}
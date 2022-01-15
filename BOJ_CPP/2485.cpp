#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int a[100'001];

int main() {
    fastio;
    int n;
    cin >> n;
    cin >> a[0] >> a[1];
    int x = a[1] - a[0];
    for (int i = 2; i < n; ++i) {
        cin >> a[i];
        x = gcd(x, a[i] - a[i - 1]);
    }
    cout << (a[n - 1] - a[0]) / x - n + 1;
    return 0;
}
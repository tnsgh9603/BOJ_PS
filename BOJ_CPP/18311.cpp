#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int a[100'001];

int main() {
    fastio;
    int n;
    long long k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        k -= a[i];
        if (k < 0) {
            cout << i;
            return 0;
        }
    }
    for (int i = n; i >= 1; --i) {
        k -= a[i];
        if (k < 0) {
            cout << i;
            return 0;
        }
    }
}
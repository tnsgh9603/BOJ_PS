#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
ll arr1[41];

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }
    ll nu = arr1[n - 1], de = 1;
    for (int i = n - 2; i >= 0; --i) {
        ll od = de;
        de = nu;
        nu = od;
        nu += arr1[i] * de;
        ll di = gcd(de, nu);
        nu /= di;
        de /= di;
    }
    cout << nu << "/" << de;
    return 0;
}
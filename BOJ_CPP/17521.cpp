#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;

int main() {
    fastio;
    ll n, w, x, arr[20];
    cin >> n >> w;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] < arr[i + 1]) {
            x = w / arr[i];
            w = w % arr[i];
            x = arr[i + 1] * x;
            w += x;
        }
    }
    cout << w;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        sum += v[i] - i;
    }
    cout << sum;
    return 0;
}
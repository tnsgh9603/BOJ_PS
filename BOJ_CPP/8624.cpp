#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k, i, j;
    cin >> n >> k >> i >> j;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    rotate(v.begin(), v.begin() + k, v.end());
    cout << accumulate(v.begin() + i, v.begin() + j + 1, 0ll);
    return 0;
}
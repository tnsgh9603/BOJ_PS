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
    int cnt = 0, idx1 = 0, idx2 = 0;
    while (cnt < k) {
        while (v[idx1] == v[++idx2]) {
            ++cnt;
        }
        ++cnt;
        idx1 = idx2;
    }
    cout << cnt;
    return 0;
}
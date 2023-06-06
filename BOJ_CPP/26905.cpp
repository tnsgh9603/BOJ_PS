#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int cnt = 0;
    while (!is_sorted(v.begin(), v.end())) {
        for (int i = 0; i < n - 1; ++i) {
            if (v[i] > v[i + 1]) {
                ++cnt;
                swap(v[i], v[i + 1]);
            }
        }
    }
    cout << cnt;
    return 0;
}
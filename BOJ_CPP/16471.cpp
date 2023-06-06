#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }
    sort(v1.rbegin(), v1.rend());
    sort(v2.begin(), v2.end());
    int idx = n - 1, cnt = 0;
    for (int i = 0; i < n and idx >= 0; ++i) {
        if (v1[i] < v2[idx]) {
            ++cnt;
            --idx;
        }
    }
    cout << (cnt >= (n + 1) / 2 ? "YES" : "NO");
    return 0;
}
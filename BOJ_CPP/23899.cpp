#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k;
    cin >> n;
    vector<int> v1(n + 1), v2(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> v1[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> v2[i];
    }
    if (equal(v1.begin() + 1, v1.end(), v2.begin() + 1)) {
        cout << 1;
        return 0;
    }
    for (int i = n; i >= 1; --i) {
        int mx = 0, idx;
        for (int j = 1; j <= i; ++j) {
            if (mx < v1[j]) {
                mx = v1[j];
                idx = j;
            }
        }
        if (idx != i) {
            swap(v1[idx], v1[i]);
            if (equal(v1.begin() + 1, v1.end(), v2.begin() + 1)) {
                cout << 1;
                return 0;
            }
        }
    }
    cout << 0;
    return 0;
}
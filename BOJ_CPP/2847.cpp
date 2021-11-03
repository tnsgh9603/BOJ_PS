#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, cnt = 0;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for (int j = n - 1; j >= 0; --j) {
        while (v[j] <= v[j - 1]) {
            --v[j - 1];
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
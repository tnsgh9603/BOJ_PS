#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        int cnt = 0;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        for (int i = 1; i < n - 1; ++i) {
            if (v[i - 1] < v[i] and v[i] > v[i + 1]) {
                ++cnt;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
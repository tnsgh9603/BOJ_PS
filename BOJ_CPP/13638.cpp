#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    while (cin >> n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int sum = accumulate(v.begin(), v.end(), 0), ans = 0;
        if (sum % n) {
            cout << "-1\n";
            continue;
        }
        for (int i = 0; i < n; ++i) {
            ans += abs(v[i] - sum / n);
        }
        cout << ans / 2 + 1 << "\n";
    }
    return 0;
}
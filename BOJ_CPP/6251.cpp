#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    while (cin >> n && n) {
        vector<int> v(n);
        for (int &i: v) {
            cin >> i;
        }
        cin >> m;
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += max(0, v[m - 1] + 1 - v[i]);
        }
        cout << sum << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, d;
    cin >> n >> d;
    vector<int> x(n), y(n), t(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i] >> t[i];
        for (int j = 0; j < i; ++j) {
            if (t[i] == t[j]) {
                continue;
            }
            if (d * d == (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j])) {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
    return 0;
}
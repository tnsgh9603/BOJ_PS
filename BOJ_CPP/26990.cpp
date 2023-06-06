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
    if (n == 1) {
        cout << 1;
    } else if (n == 2) {
        if (v[0] == v[1]) {
            cout << "1\n2";
        } else {
            cout << (max(v[0], v[1]) == v[0] ? 1 : 2);
        }
    } else {
        if (v[0] >= v[1]) {
            cout << "1\n";
        }
        for (int i = 1; i < n - 1; ++i) {
            if (v[i - 1] <= v[i] && v[i] >= v[i + 1]) {
                cout << i + 1 << "\n";
            }
        }
        if (v[n - 2] <= v[n - 1]) {
            cout << n << "\n";
        }
    }
    return 0;
}
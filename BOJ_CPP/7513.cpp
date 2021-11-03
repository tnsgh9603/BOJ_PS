#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int m, n;
        cin >> m;
        string arr[m];
        for (int j = 0; j < m; ++j) {
            cin >> arr[j];
        }
        cin >> n;
        cout << "Scenario #" << i << ":\n";
        for (int l = 0; l < n; ++l) {
            int k;
            cin >> k;
            for (int in = 0; in < k; ++in) {
                int idx;
                cin >> idx;
                cout << arr[idx];
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
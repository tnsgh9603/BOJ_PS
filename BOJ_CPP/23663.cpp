#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<int> v1(n), v2(m);
        for (int i = 0; i < n; ++i) {
            cin >> v1[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> v2[i];
        }
        cout << (n > m ? "No" : "Yes") << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v(n), ans;
    int mx1 = -INT_MAX, mx2 = -INT_MAX;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (mx1 == -INT_MAX) {
            mx1 = v[i];
        } else if (mx2 == -INT_MAX) {
            mx2 = v[i];
            if (mx1 < mx2) {
                swap(mx1, mx2);
            }
            ans.push_back(mx2);
        } else {
            if (mx1 >= v[i] and v[i] >= mx2) {
                mx2 = v[i];
            } else if (mx1 < v[i]) {
                mx2 = mx1;
                mx1 = v[i];
            }
            ans.push_back(mx2);
        }
    }
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    return 0;
}
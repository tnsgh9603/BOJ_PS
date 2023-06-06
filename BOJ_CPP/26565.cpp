#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        cout << int(ceil(double(v[0]) * s / 1000)) << "\n";
    }
    return 0;
}
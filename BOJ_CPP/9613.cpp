#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                sum += gcd(v[i], v[j]);
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
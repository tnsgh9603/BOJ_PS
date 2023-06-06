#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    vector<int> v1(101), v2(101);
    while (t--) {
        int n, l;
        cin >> n >> l;
        for (int i = 0; i < n; ++i) {
            cin >> v1[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> v2[i];
        }
        sort(v1.begin(), v1.begin() + n);
        sort(v2.begin(), v2.begin() + n, greater<>());
        int sum = 0;
        for (int i = 0; i < l; ++i) {
            sum += v1[i] - v2[i];
        }
        cout << (sum > 0 ? "YES" : "NO") << "\n";
    }
    return 0;
}
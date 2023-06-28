#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> v1(n), v2(m);
        for (int &i: v1) {
            cin >> i;
        }
        for (int &i: v2) {
            cin >> i;
        }
        sort(v2.begin(), v2.end());
        int sum = 0;
        for (int &i: v1) {
            sum += lower_bound(v2.begin(), v2.end(), i) - v2.begin();
        }
        cout << sum << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    while (cin >> n >> m && n) {
        int temp1 = 0, temp2 = INT_MAX;
        for (int i = 0; i < n; ++i) {
            int k;
            string s;
            cin >> k >> s;
            if (s == "SAFE") {
                temp1 = max(temp1, k);
            } else {
                temp2 = min(temp2, k);
            }
        }
        cout << (temp1 == 0 ? 2 : min({temp1 + 1, temp2})) << " " << (temp2 == INT_MAX ? m - 1 : temp2 - 1) << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> diff2beauty(11, -1000);
        for (int i = 0; i < n; ++i) {
            int b, d;
            cin >> b >> d;
            diff2beauty[d] = max(diff2beauty[d], b);
        }
        int total_beauty = 0;
        for (int d = 1; d <= 10; ++d) {
            total_beauty += diff2beauty[d];
        }
        cout << (total_beauty < 0 ? "MOREPROBLEMS" : to_string(total_beauty)) << "\n";
    }
    return 0;
}

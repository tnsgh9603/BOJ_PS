#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v1(n), v2(m);
        for (int &i: v1) {
            cin >> i;
        }
        for (int &i: v2) {
            cin >> i;
        }
        int ans = 0;
        double sum1 = accumulate(v1.begin(), v1.end(), 0.), sum2 = accumulate(v2.begin(), v2.end(), 0.);
        double avg1 = sum1 / v1.size(), avg2 = sum2 / v2.size();
        for (int i = 0; i < n; ++i) {
            double new_avg1 = (sum1 - v1[i]) / (v1.size() - 1), new_avg2 = (sum2 + v1[i]) / (v2.size() + 1);
            if (new_avg1 > avg1 and new_avg2 > avg2) {
                ++ans;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
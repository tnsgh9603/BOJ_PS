#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k;
    while (cin >> n && n) {
        cin >> k;
        vector<pair<int, int>> v(n + 1);
        for (int i = 0; i < k * n * (n - 1) / 2; ++i) {
            int p1, p2;
            string m1, m2;
            cin >> p1 >> m1 >> p2 >> m2;
            if (m1 == m2) {
                continue;
            }
            ++v[m1[0] == 'r' && m2[0] == 's' || m1[0] == 's' && m2[0] == 'p' || m1[0] == 'p' && m2[0] == 'r' ? p1 : p2].first;
            ++v[p1].second;
            ++v[p2].second;
        }
        for (int i = 1; i <= n; ++i) {
            if (!v[i].second) {
                cout << "-\n";
            } else {
                cout << fixed << setprecision(3) << round(double(v[i].first) / v[i].second * 1000) / 1000 << "\n";
            }
        }
        cout << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end());
        double mn = 987654321;
        int idx1, idx2;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                double dist = hypot(abs(v[j].first - v[i].first), abs(v[j].second - v[i].second));
                if(mn > dist) {
                    mn = dist;
                    idx1 = i;
                    idx2 = j;
                }
            }
        }
        cout << v[idx1].first << " " << v[idx1].second << " " << v[idx2].first << " " << v[idx2].second << "\n";
    }
    return 0;
}
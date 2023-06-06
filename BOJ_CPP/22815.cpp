#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        int a, b, now_x = 0, now_y = 0;
        vector<pair<int, int>> v;
        while (cin >> a >> b && (a or b)) {
            now_x += a;
            now_y += b;
            if (now_x == 5 and now_y == 6) {
                now_x = 5;
            }
            v.push_back({now_x, now_y});
        }
        int ans_x, ans_y;
        double mx = 0;
        for (int i = 0; i < v.size(); ++i) {
            double dist = hypot(v[i].first, v[i].second);
            if (mx < dist) {
                mx = dist;
                ans_x = v[i].first;
                ans_y = v[i].second;
            } else if (mx == dist and v[i].first > ans_x) {
                ans_x = v[i].first;
                ans_y = v[i].second;
            }
        }
        cout << ans_x << " " << ans_y << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, l;
    cin >> n >> l;
    vector<pair<int, int>> v;
    int left_mx = 0, right_mx = 0, left_cnt = 0;
    for (int i = 1; i <= n; ++i) {
        int m;
        cin >> m;
        if (m > 0) {
            right_mx = max(right_mx, l - m);
        } else if (m < 0) {
            ++left_cnt;
            left_mx = max(left_mx, -m);
        }
        v.push_back({abs(m), i});
    }
    sort(v.begin(), v.end());
    if (left_mx > right_mx) {
        cout << v[left_cnt - 1].second << " " << left_mx;
    } else {
        cout << v[left_cnt].second << " " << right_mx;
    }
    return 0;
}
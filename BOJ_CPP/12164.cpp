// 공부용 구사과님 코드
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;

int n;
pi a[3005];

ll ccw(pi a, pi b) {
    return 1ll * a.first * b.second - 1ll * b.first * a.second;
}

int solve(int c) {
    vector<pi> v1, v2;
    for (int j = 0; j < n; ++j) {
        if (j != c) {
            (P[c] < P[j] ? v1 : v2).push_back(pi(P[j].first - a[c].first, a[j].second - a[c].second));

        }
    }
    sort(v1.begin(), v1.end(), [&](const pi &a, const pi &b) {
        return ccw(a, b) > 0;
    });
    sort(v2.begin(), v2.end(), [&](const pi &a, const pi &b) {
        return ccw(a, b) > 0;
    });
    int ans = min(v1.size(), v2.size());
    int cur = 0;
    for (int i = 0; i < v1.size(); ++i) {
        while (cur < v2.size() && ccw(v1[i], v2[cur]) >= 0) {
            ++cur;
        }
        ans = min(ans, i + (int) (v2.size() - cur));
    }
    cur = 0;
    for (int i = 0; i < v2.size(); ++i) {
        while (cur < v1.size() && ccw(v2[i], v1[cur]) >= 0) {
            ++cur;
        }
        ans = min(ans, i + (int) (v1.size() - cur));
    }
    return ans;
}

int main() {
    fastio;
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        cout << "Case #" << i << ":\n";
        cin >> n;
        for (int j = 0; j < n; ++j) {
            cin >> a[j].first >> a[j].second;
        }
        for (int j = 0; j < n; ++j) {
            cout << solve(j) << "\n";
        }
    }
    return 0;
}

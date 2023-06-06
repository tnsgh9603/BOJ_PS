#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool is_prime[101];

int main() {
    fastio;
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    for (int i = a; i < b; ++i) {
        is_prime[i] = 1;
    }
    for (int i = c; i < d; ++i) {
        is_prime[i] = 1;
    }
    for (int i = e; i < f; ++i) {
        is_prime[i] = 1;
    }
    vector<pair<int, int>> v{{b - a, 1},
                             {d - c, 2},
                             {f - e, 3}};
    sort(v.begin(), v.end());
    int cnt = 0;
    bool flag = 0;
    for (int i = 1; i <= 101; ++i) {
        if (!flag && is_prime[i]) {
            flag = 1;
        } else if (flag && !is_prime[i]) {
            flag = 0;
            ++cnt;
        }
    }
    cout << cnt << "\n" << v[0].first << " " << v[2].first;
    return 0;
}
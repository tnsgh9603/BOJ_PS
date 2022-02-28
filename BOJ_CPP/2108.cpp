#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;
int cnt[8001];

int main() {
    fastio;
    int n, mn = 5000, mx = -5000;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        ++cnt[v[i] + 4000];
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }
    sort(v.begin(), v.end());
    double sum = double(accumulate(v.begin(), v.end(), 0)) / n;
    if(round(sum) == 0) {
        sum = 0;
    }
    cout << fixed << setprecision(0) << sum << "\n" << v[n / 2] << "\n";
    bool flag = 0;
    int temp = 0, idx = 0;
    for (int i = mn + 4000; i <= mx + 4000; ++i) {
        if (cnt[i]) {
            if (temp < cnt[i]) {
                temp = cnt[i];
                idx = i - 4000;
                flag = 1;
            } else if (temp == cnt[i] && flag) {
                idx = i - 4000;
                flag = 0;
            }
        }
    }
    cout << idx << "\n" << mx - mn;
    return 0;
}
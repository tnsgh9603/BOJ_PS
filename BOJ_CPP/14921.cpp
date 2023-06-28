#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int st = 0, en = n - 1, sum = v[st] + v[en], mn = abs(v[st] + v[en]);
    while (st < en) {
        if (v[st] + v[en] < 0) {
            ++st;
        } else if (v[st] + v[en] == 0) {
            cout << 0;
            return 0;
        } else {
            --en;
        }
        if (st < en and mn > abs(v[st] + v[en])) {
            mn = abs(v[st] + v[en]);
            sum = v[st] + v[en];
        }
    }
    cout << sum;
    return 0;
}
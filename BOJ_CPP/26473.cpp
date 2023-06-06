#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int cnt = 1, mx = 0, temp = v[0];
        for (int i = 1; i < n; ++i) {
            if (v[i] == temp + 1) {
                temp = v[i];
                ++cnt;
            } else {
                mx = max(cnt, mx);
                cnt = 1;
                temp = v[i];
            }
        }
        mx = max(cnt, mx);
        cout << mx << "\n";
    }
    return 0;
}
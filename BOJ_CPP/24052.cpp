#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = 1; i < n; ++i) {
        int loc = i - 1, newitem = v[i];
        bool flag = 0;
        while (0 <= loc && newitem < v[loc]) {
            flag = 1;
            v[loc + 1] = v[loc];
            --loc;
            if (++cnt == k) {
                for (auto i: v) {
                    cout << i << " ";
                }
                return 0;
            }
        }
        if (loc + 1 != i) {
            v[loc + 1] = newitem;
            if (flag && ++cnt == k) {
                for (auto i: v) {
                    cout << i << " ";
                }
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}
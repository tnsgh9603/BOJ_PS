#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        vector<string> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int cnt = 0;
        while (1) {
            bool flag = 1;
            map<string, int> mp;
            for (int i = 0; i < n; ++i) {
                if (v[i].empty()) {
                    --cnt;
                    flag = 0;
                    break;
                }
                if (mp.count(v[i])) {
                    --cnt;
                    flag = 0;
                    break;
                }
                mp[v[i]] = 1;
                v[i].erase(v[i].begin());
            }
            if (flag) {
                ++cnt;
            }
            if (!flag) {
                break;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
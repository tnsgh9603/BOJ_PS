#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, tc = 1;
    while (cin >> n && n) {
        vector<int> level(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> level[i];
        }
        string s;
        int m;
        vector<pair<string, int>> v;
        while (cin >> s >> m && s != "#") {
            int sum = 0;
            for (int i = 0; i < m; ++i) {
                int q, w;
                cin >> q >> w;
                sum += level[q] * w;
            }
            v.push_back({s, sum});
        }
        cout << "Machine " << tc++ << "\n";
        for (auto[a, b]: v) {
            cout << a << " " << b << "\n";
        }
    }
    return 0;
}
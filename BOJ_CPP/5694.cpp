#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool trapped[91];

int main() {
    fastio;
    int n, b;
    while (cin >> n >> b && n) {
        memset(trapped, 0, sizeof(trapped));
        vector<int> v;
        for (int i = 0; i < b; ++i) {
            int m;
            cin >> m;
            v.push_back(m);
            trapped[m] = 1;
        }
        for (int i = 0; i < b; ++i) {
            for (int j = i + 1; j < b; ++j) {
                trapped[abs(v[i] - v[j])] = 1;
            }
        }
        int cnt = 0;
        for (int i = 0; i <= n; ++i) {
            if (!trapped[i]) {
                ++cnt;
            }
        }
        cout << (cnt ? "N" : "Y") << "\n";
    }
    return 0;
}
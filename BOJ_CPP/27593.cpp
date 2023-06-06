#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> v(n + 2);
        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
        }
        int cnt = 0;
        v[0] = 0;
        v[n + 1] = 1440;
        for (int i = 0; i < v.size() - 1; ++i) {
            if (v[i + 1] - v[i] >= 120) {
                ++cnt;
            }
            if (v[i + 1] - v[i] >= 240) {
                cnt = 2;
                break;
            }
        }
        cout << (cnt >= 2 ? "YES" : "NO") << "\n";
    }
    return 0;
}
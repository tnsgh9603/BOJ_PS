#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, w = 0;
    cin >> n;
    vector<char> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int m, k;
    cin >> m >> k;
    for (int i = 0; i < m; ++i) {
        int p = 0;
        for (int j = 0; j < k; ++j) {
            int x;
            cin >> x;
            if (v[x - 1] == 'P') {
                ++p;
            }
        }
        if (p == 0) {
            ++w;
        }
    }
    cout << (w ? 'W' : 'P');
    return 0;
}
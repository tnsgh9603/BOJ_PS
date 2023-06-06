#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, a, cnt = 0;
    cin >> n >> m >> a;
    vector<int> v(n * m);
    for (int i = 0; i < n * m; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < m; ++i) {
        int idx = n - 1;
        for (int j = m * idx + i; j >= m; j -= m) {
            if (v[j] > 2 * v[j - m]) {
                ++cnt;
            }
        }
    }
    cout << a * cnt;
    return 0;
}
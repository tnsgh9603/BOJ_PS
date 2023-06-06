#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    if (n - m <= m - 1) {
        int cnt = 0;
        for (int i = m - 1; i < n; ++i) {
            cnt += v[i] + 1;
        }
        --cnt;
        cnt += n - m + 1;
        for (int i = m - 2; i >= 0; --i) {
            cnt += v[i] + 1;
        }
        --cnt;
        cout << cnt;
    } else {
        int cnt = 0;
        for (int i = m - 2; i >= 0; --i) {
            cnt += v[i] + 1;
        }
        --cnt;
        cnt += m;
        for (int i = m - 1; i < n; ++i) {
            cnt += v[i] + 1;
        }
        --cnt;
        cout << cnt;
    }
    return 0;
}
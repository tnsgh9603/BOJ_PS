#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool visited[1001];

int main() {
    fastio;
    int n, l;
    cin >> n >> l;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            ++cnt;
            for (int j = i; j < n; ++j) {
                if (v[j] - v[i] + 1 <= l) {
                    visited[j] = 1;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
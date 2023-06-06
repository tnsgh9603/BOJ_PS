#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool arr1[101];

int main() {
    fastio;
    int n, m, k, q;
    cin >> n >> m >> k;
    for (int i = 0; i < m; ++i) {
        cin >> q;
        arr1[q] = 1;
    }
    for (int i = 0; i < k; ++i) {
        cin >> q;
        arr1[q] = 1;
    }
    vector<int> v;
    for (int i = 1; i <= n; ++i) {
        if (!arr1[i]) {
            v.push_back(i);
        }
    }
    cout << v.size() << "\n";
    for (int &i: v) {
        cout << i << " ";
    }
    return 0;
}
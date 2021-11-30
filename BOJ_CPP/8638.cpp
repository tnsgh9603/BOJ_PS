#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, mx = -1, m;
    cin >> n;
    vector<char> v;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        if (m > mx) {
            mx = m;
            v.clear();
            v.push_back('A' + i);
        } else if (m == mx) {
            v.push_back('A' + i);
        }
    }
    for (auto i: v) {
        cout << i;
    }
    return 0;
}
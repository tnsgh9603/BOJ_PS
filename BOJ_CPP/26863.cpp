#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    vector<int> v(4);
    for (int i = 0; i < 4; ++i) {
        cin >> v[i];
    }
    int n;
    cin >> n;
    sort(v.begin(), v.end());
    if (v[0] == v[1] and v[1] == v[2] and v[2] == v[3] || v[0] + n == v[1] and v[1] == v[2] and v[2] == v[3]) {
        cout << 1;
        return 0;
    }
    cout << 0;
    return 0;
}
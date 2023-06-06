#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    vector<int> v(3);
    for (int i = 0; i < 3; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (v[0] == 0 and v[1] == 0) {
        swap(v[0], v[2]);
    } else if (v[0] == 0) {
        swap(v[0], v[1]);
    }
    for (int i = 0; i < 3; ++i) {
        cout << v[i];
    }
    return 0;
}
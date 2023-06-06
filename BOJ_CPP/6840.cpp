#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    vector<int> v(3);
    for (auto &i: v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    cout << v[1];
    return 0;
}
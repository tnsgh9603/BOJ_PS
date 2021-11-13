#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    vector<int> v1(11, 0), v2(11, 0);
    int ball, _;
    cin >> ball >> _;
    for (int i = 0; i < 11; ++i) {
        cin >> v1[i] >> _;
    }
    for (int i = 0; i < 11; ++i) {
        cin >> v2[i] >> _;
    }
    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());
    cout << (v1[0] > 0 && v1[0] > ball && v1[0] > v2[1] ? 1 : 0);
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string c1, c2, c3, c4;
    cin >> c1 >> c2 >> c3 >> c4;
    long long mx = 0;
    vector<string> v{c1, c2, c3, c4};
    sort(v.begin(), v.end());
    do {
        string s = v[0] + v[1] + v[2] + v[3];
        mx = max(mx, stoll(s));
    } while (next_permutation(v.begin(), v.end()));
    cout << mx;
    return 0;
}
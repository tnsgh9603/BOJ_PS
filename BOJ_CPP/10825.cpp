#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<tuple<int, int, int, string>> v(n);
    for (int i = 0; i < n; ++i) {
        string s;
        int k, e, m;
        cin >> s >> k >> e >> m;
        v[i] = {-k, e, -m, s};
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i) {
        cout << get<3>(v[i]) << "\n";
    }
    return 0;
}
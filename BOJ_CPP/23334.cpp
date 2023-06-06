#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<tuple<int, int, int, string>> v(n);
    for (auto &[a, b, c, d]: v) {
        cin >> a >> b >> c >> ws;
        getline(cin, d);
    }
    cout << get<3>(*max_element(v.begin(), v.end()));
    return 0;
}
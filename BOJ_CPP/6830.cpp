#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    int n;
    vector<pair<int, string>> v;
    while (cin >> s >> n && s != "Waterloo") {
        v.push_back({n, s});
    }
    sort(v.begin(), v.end());
    cout << v[0].second;
    return 0;
}
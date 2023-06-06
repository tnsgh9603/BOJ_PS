#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, cnt = 0;
    string s;
    cin >> n >> m >> ws;
    vector<string> v;
    for (int i = 0; i < n; ++i) {
        getline(cin, s);
        v.push_back(s);
    }
    for (int i = 0; i < m; ++i) {
        getline(cin, s);
        for (int j = 0; j < n; ++j) {
            if (v[j].find(s) != -1) {
                ++cnt;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}
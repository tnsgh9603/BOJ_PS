#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    map<int, vector<int>> mp;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        mp[x].push_back(i);
    }
    for (int v = 6; v >= 1; --v) {
        if (mp[v].size() == 1) {
            cout << mp[v][0];
            return 0;
        }
    }
    cout << "none";
}

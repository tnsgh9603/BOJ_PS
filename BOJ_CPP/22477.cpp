#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n;
    string s;
    map<string, int> mp;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        mp[s] = 1;
    }
    cin >> m;
    bool flag = 1;
    for (int i = 0; i < m; ++i) {
        cin >> s;
        if (mp.count(s)) {
            cout << (flag ? "Opened by " : "Closed by ");
            flag = !flag;
        } else {
            cout << "Unknown ";
        }
        cout << s << "\n";
    }
    return 0;
}
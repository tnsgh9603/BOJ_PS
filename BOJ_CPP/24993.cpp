#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<string> v(n);
    vector<bool> visited(26);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        visited[v[i][0] - 'A'] = 1;
    }
    bool flag = 0;
    for (int i = 0; i < n; ++i) {
        bool chk = 1;
        for (char c: v[i]) {
            chk &= visited[c - 'A'];
        }
        flag |= chk;
    }
    cout << (flag ? "Y" : "N");
    return 0;
}
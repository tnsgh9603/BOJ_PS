#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, cnt = 0;
    string s;
    map<string, int> mp;
    cin >> n;
    while (n--) {
        string m;
        cin >> m;
        if (!mp[m]) {
            ++mp[m];
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    string s;
    map<string, int> mp;
    int cur = 0;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        ++mp[s];
    }
    for (int i = n; i < n * 2; ++i) {
        cin >> s;
        if (mp[s] > 0) {
            --mp[s];
            ++cur;
        }
    }
    cout << cur;
    return 0;
}
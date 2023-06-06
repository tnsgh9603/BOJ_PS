#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    map<char, int>mp;
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; ++i) {
        ++mp[s[i]];
    }
    cout << min({mp['H'], mp['I'], mp['A'], mp['R'], mp['C']});
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '1') {
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    string temp;
    map<string, int> mp;
    int cnt = 0;
    while (ss >> temp) {
        if (!mp.count(temp)) {
            mp[temp] = 1;
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
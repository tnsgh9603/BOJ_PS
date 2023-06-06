#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n >> ws;
    string s;
    map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    while (n--) {
        getline(cin, s);
        int sum = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (mp.count(s[i])) {
                sum += mp[s[i]];
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
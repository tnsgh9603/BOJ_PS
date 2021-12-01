#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string weight = "2765432", mp = "JABCDEFGHIZ";

int main() {
    fastio;
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); ++i) {
        sum += (s[i] - '0') * (weight[i] - '0');
    }
    cout << mp[sum % 11];
    return 0;
}
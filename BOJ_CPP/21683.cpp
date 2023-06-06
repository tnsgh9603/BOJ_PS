#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2;
    cin >> s1 >> s2;
    long long mx1 = 0, mn1 = LLONG_MAX, mx2 = 0, mn2 = LLONG_MAX;
    for (int i = 0; i < s1.length(); ++i) {
        rotate(s1.begin(), s1.begin() + i, s1.end());
        if(to_string(stoll(s1)).length() == s1.length()) {
            mx1 = max(mx1, stoll(s1));
            mn1 = min(mn1, stoll(s1));
        }
    }
    for (int i = 0; i < s2.length(); ++i) {
        rotate(s2.begin(), s2.begin() + i, s2.end());
        if(to_string(stoll(s2)).length() == s2.length()) {
            mx2 = max(mx2, stoll(s2));
            mn2 = min(mn2, stoll(s2));
        }
    }
    cout << max(mx1 - mn2, mx2 - mn1);
    return 0;
}
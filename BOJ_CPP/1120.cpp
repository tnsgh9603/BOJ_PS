#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2;
    cin >> s1 >> s2;
    int len1 = s1.length(), len2 = s2.length(), len3 = len2 - len1, mn = INT_MAX;
    for (int i = 0; i <= len3; ++i) {
        int cnt = 0;
        for (int j = 0; j < len1; ++j) {
            if (s1[j] != s2[i + j]) {
                ++cnt;
            }
        }
        mn = min(mn, cnt);
    }
    cout << mn;
    return 0;
}
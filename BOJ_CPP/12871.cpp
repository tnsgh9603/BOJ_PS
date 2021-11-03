#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s1, s2;
    cin >> s1 >> s2;
    int len1 = s1.length(), len2 = s2.length(), len = lcm(len1, len2);
    for (int i = 0; i < len; ++i) {
        if (s1[i % len1] != s2[i % len2]) {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}
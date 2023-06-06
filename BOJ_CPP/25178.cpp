#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
map<char, int> mp, mp2;

int main() {
    fastio;
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    for (int i = 0; i < n; ++i) {
        ++mp[s1[i]];
    }
    for (int i = 0; i < n; ++i) {
        ++mp2[s2[i]];
    }
    for (auto[a, b]: mp) {
        if (mp[a] != mp2[a]) {
            cout << "NO";
            return 0;
        }
    }

    if (s1[0] != s2[0] or s1[n - 1] != s2[n - 1]) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        if (string("aeiou").find(s1[i]) != -1) {
            s1.erase(s1.begin() + i);
            --i;
        }
        if (string("aeiou").find(s2[i]) != -1) {
            s2.erase(s2.begin() + i);
            --i;
        }
    }
    cout << (s1 == s2 ? "YES" : "NO");
    return 0;
}
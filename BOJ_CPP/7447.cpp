#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    map<string, bool> mp;
    vector<string> v;
    while (cin >> s && s != "#") {
        v.push_back(s);
        mp[s] = 1;
    }
    while (cin >> s && s != "#") {
        if (mp[s]) {
            cout << s << " is correct\n";
            continue;
        }
        cout << s << ": ";
        for (string &x: v) {
            if (x.length() == s.length()) {
                int diff = 0;
                for (int i = 0; i < s.length(); ++i) {
                    if (s[i] != x[i]) {
                        ++diff;
                    }
                }
                if (diff == 1) {
                    cout << x << " ";
                }
            } else if (x.length() == s.length() - 1) {
                bool flag1 = 0, flag2 = 1;
                for (int i = 0, j = 0; i < x.length(); ++i) {
                    if (x[i] == s[j]) {
                        ++j;
                    } else {
                        if (!flag1) {
                            flag1 = 1;
                            ++j;
                            if (x[i] != s[j]) {
                                flag2 = 0;
                            }
                            ++j;
                        } else {
                            flag2 = 0;
                        }
                    }
                }
                if (flag2) {
                    cout << x << " ";
                }
            } else if (x.length() == s.length() + 1) {
                bool flag1 = 0, flag2 = 1;
                for (int i = 0, j = 0; i < s.length(); ++i) {
                    if (s[i] == x[j]) {
                        ++j;
                    } else {
                        if (!flag1) {
                            flag1 = 1;
                            ++j;
                            if (x[j] != s[i]) {
                                flag2 = 0;
                            }
                            ++j;
                        } else {
                            flag2 = 0;
                        }
                    }
                }
                if (flag2) {
                    cout << x << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
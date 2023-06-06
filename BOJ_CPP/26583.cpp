#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    vector<int> v;
    while (getline(cin, s)) {
        s += " ";
        v.clear();
        v.push_back(1);
        int L = 0;
        for (int R = 0; R < s.length(); ++R) {
            if (s[R] == ' ') {
                v.emplace_back(stoi(s.substr(L, R - L)));
                L = R + 1;
            }
        }
        int sz = v.size();
        v.push_back(1);
        for (int i = 1; i < sz; ++i) {
            cout << v[i - 1] * v[i] * v[i + 1] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
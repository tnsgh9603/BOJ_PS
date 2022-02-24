#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s, t;
    cin >> s >> t;
    while (s.length() != t.length()) {
        if (t.back() != 'A')
            t.pop_back();
        else {
            reverse(t.begin(), t.end());
        }
    }
    cout << (s == t);
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    cout << (s.length() & 1 || !equal(s.begin(), s.begin() + s.size() / 2 - 1, s.rbegin()) ? "fix" : "correct");
    return 0;
}
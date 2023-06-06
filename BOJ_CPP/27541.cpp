#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    string s;
    cin >> n >> s;
    cout << (s[s.length() - 1] == 'G' ? s.substr(0, s.length() - 1) : s + 'G');
    return 0;
}
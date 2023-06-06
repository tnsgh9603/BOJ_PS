#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    while (cin >> s and s != "0") {
        int n = *max_element(s.begin(), s.end()) - '0';
        s.replace(s.find(to_string(n)), 1, to_string((n & 1) ? 0 : (n + 4) % 10));
        cout << stoi(s) << "\n";
    }
    return 0;
}
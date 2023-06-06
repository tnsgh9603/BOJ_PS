#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    getline(cin, s);
    int sum = 0;
    for (int i = 0; i < s.length(); ++i) {
        sum += s[i];
    }
    cout << char(sum / s.length());
    return 0;
}
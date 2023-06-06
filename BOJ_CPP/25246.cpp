#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    cout << s.substr(0, s.find_last_of("aeiou") + 1) << "ntry";
    return 0;
}

#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    cout << (s.length() < 5 || s.substr(s.length() - 5, 5) != "driip" ? "not cute" : "cute");
    return 0;
}
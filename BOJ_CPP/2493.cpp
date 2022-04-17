#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    getline(cin, s);
    cout << (s.substr(s.length() - 3, 3) == "eh?" ? "Canadian!" : "Imposter!");
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    getline(cin, s);
    cout << (s.find("d2") != -1 || s.find("D2") != -1 ? "D2" : "unrated");
    return 0;
}
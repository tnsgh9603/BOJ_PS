#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int r, p;

int main() {
    fastio;
    string s, f;
    getline(cin, s);
    getline(cin, f);
    while (s.find(f, p) < 2501) {
        int temp = s.find(f, p);
        ++r;
        p = temp + f.length();
    }
    cout << r;
    return 0;
}
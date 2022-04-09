#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s = "SciComLove";
    int n;
    cin >> n;
    n %= s.length();
    rotate(s.begin(), s.begin() + n, s.end());
    cout << s;
    return 0;
}
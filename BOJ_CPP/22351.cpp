#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    for (int i = 1; i <= 999; ++i) {
        string x;
        for (int j = i; j <= 999; ++j) {
            x += to_string(j);
            if (x == s) {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    return 0;
}
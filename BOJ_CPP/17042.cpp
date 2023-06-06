#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    char c;
    int tc;
    cin >> c >> tc;
    set<char> S;
    S.insert(c);
    while (tc--) {
        char c1, c2;
        cin >> c1 >> c2;
        if (c2 == c) {
            c = c1;
            S.insert(c1);
        }
    }
    cout << c << "\n" << S.size();
    return 0;
}
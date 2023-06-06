#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    char k;
    string s;
    cin >> n >> k;
    set<string> S;
    while (n--) {
        cin >> s;
        S.insert(s);
    }
    cout << S.size() / (k == 'Y' ? 1 : k == 'F' ? 2 : 3);
    return 0;
}
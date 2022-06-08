#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    int w = 0, t = -30, o = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        int m;
        cin >> s >> m;
        (s == "ocean" ? w : s == "oxygen" ? o : t) += m;
    }
    cout << (w >= 9 && t >= 8 && o >= 14 ? "liveable" : "not liveable");
    return 0;
}
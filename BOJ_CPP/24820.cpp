#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    char center = s[0];
    sort(s.begin(), s.end());
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string S;
        cin >> S;
        if (S.size() >= 4 && S.find(center) != -1) {
            string l = S;
            sort(l.begin(), l.end());
            if (includes(s.begin(), s.end(), l.begin(), unique(l.begin(), l.end()))) {
                cout << S << "\n";
            }
        }
    }
    return 0;
}

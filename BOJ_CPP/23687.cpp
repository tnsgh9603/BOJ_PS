#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    int c1 = 0, c2 = 0, c3 = 0;
    while (n--) {
        string s, t;
        cin >> s >> t;
        if (s == "section") {
            ++c1, c2 = 0, c3 = 0;
            cout << c1 << " " << t << "\n";
        } else if (s == "subsection") {
            ++c2, c3 = 0;
            cout << c1 << "." << c2 << " " << t << "\n";
        } else {
            ++c3;
            cout << c1 << "." << c2 << "." << c3 << " " << t << "\n";
        }
    }
    return 0;
}
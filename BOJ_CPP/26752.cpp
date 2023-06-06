#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int h, m, s;
    cin >> h >> m >> s;
    if (s++ == 59) {
        s = 0;
        ++m;
    }
    if (m == 60) {
        m = 0;
        ++h;
    }
    if (h == 24) {
        h = 0;
    }
    cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s;
    return 0;
}
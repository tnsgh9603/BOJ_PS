#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int h, m, dh, dm, c;
    cin >> h >> m >> dh >> dm >> c;
    m = (h + dh) * 60 + (m + dm);
    h = m / 60 % 12;
    m %= 60;
    if (c == 1) {
        cout << h << " " << m;
    } else {
        int temp = h * 5 + 5 * m / 60;
        if (m % 12 == 0) {
            cout << "@ " << temp;
        } else {
            cout << temp << " " << (temp + 1) % 60;
        }
    }
    return 0;
}
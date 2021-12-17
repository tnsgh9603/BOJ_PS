#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int b[3];

int main() {
    fastio;
    int n;
    cin >> n;
    int a, c = 0, s = 0;
    while (n--) {
        cin >> a;
        if (a == 1) {
            ++c;
        } else if (a == 3) {
            ++c;
            s += b[2];
            b[2] = b[1];
            b[1] = b[0];
            b[0] = 0;
        }
        if (a == 2 || c == 4) {
            c = 0;
            if (b[2] && b[1] && b[0]) {
                ++s;
            }
            if (b[1] && b[0]) {
                b[2] = 1;
            }
            if (b[0]) {
                b[1] = 1;
            }
            b[0] = 1;
        }
    }
    cout << s;
    return 0;
}
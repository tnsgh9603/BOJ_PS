#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
char c[4][4];
int a[4];

int main() {
    fastio;
    int x;
    cin >> x;
    for (int i = 0; i < 4; ++i) {
        a[3 - i] = x % 10;
        x /= 10;
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            c[i][3 - j] = a[i] % 2 ? '*' : '.';
            a[i] /= 2;
        }
    }
    for (int i = 0; i < 4; ++i) {
        cout << c[0][i] << " " << c[1][i] << "   " << c[2][i] << " " << c[3][i] << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    while (1) {
        b += a;
        if (b >= 5) {
            cout << "yt";
            break;
        }
        a += b;
        if (a >= 5) {
            cout << "yj";
            break;
        }
    }
    return 0;
}
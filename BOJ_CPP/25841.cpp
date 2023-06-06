#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, cnt = 0;
    cin >> a >> b >> c;
    for (int i = a; i <= b; ++i) {
        int j = i;
        while (j) {
            if (j % 10 == c) {
                ++cnt;
            }
            j /= 10;
        }
    }
    cout << cnt;
    return 0;
}
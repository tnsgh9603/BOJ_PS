#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    for (int i = 1; i <= 32; ++i) {
        if (a <= i * i * i * i * i * i && i * i * i * i * i * i <= b) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
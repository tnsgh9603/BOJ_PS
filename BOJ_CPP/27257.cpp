#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, cnt = 0;
    cin >> n;
    while (n % 10 == 0) {
        n /= 10;
    }
    while (n) {
        if (n % 10 == 0) {
            ++cnt;
        }
        n /= 10;
    }
    cout << cnt;
    return 0;
}
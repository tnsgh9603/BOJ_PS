#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int cnt = 0, n;
    cin >> n;
    while(n >= 5) {
        cnt += n / 5;
        n /= 5;
    }
    cout << cnt;
    return 0;
}
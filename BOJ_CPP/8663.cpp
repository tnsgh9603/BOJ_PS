#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    int sum = 0, cnt = 0;
    while (1) {
        if (sum >= a) {
            cout << cnt;
            return 0;
        }
        if (b == 1) {
            cout << cnt + a - sum;
            return 0;
        } else {
            sum += b;
            b /= 2;
            ++cnt;
        }
    }
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    // 토끼 board, 올빼미 y, 요리 z
    char now = 'x';
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if (now == 'x') {
            if (a > b) {
                sum += b;
                now = 'z';
            } else {
                sum += a;
                now = 'y';
            }
        } else if (now == 'y') {
            if (a > c) {
                sum += c;
                now = 'z';
            } else {
                sum += a;
                now = 'x';
            }
        } else {
            if (b > c) {
                sum += c;
                now = 'y';
            } else {
                sum += b;
                now = 'x';
            }
        }
    }
    cout << sum / 100 << " " << sum % 100;
    return 0;
}
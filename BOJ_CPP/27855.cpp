#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum1 = 3 * a + b, sum2 = 3 * c + d;
    if (sum1 == sum2) {
        cout << "NO SCORE";
    } else if (sum1 > sum2) {
        cout << "1 " << sum1 - sum2;
    } else {
        cout << "2 " << sum2 - sum1;
    }
    return 0;
}
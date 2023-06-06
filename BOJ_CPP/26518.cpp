#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    long double b, c, a1, a2, temp;
    cin >> b >> c >> a1 >> a2;
    for (int i = 0; i <= 30000; ++i) {
        temp = b * a2 + c * a1;
        if (i == 300) {
            cout << fixed << setprecision(6) << temp / a2;
            return 0;
        }
        a1 = a2;
        a2 = temp;
    }
}
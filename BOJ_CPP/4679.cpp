#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    double a, b, c, d;
    while (cin >> a >> b >> c >> d && a) {
        double temp = b * d / 100, cur = 0, time = 0;
        while(1) {
            cur += b;
            ++time;
            if(cur > a) {
                cout << "success";
                break;
            }
            cur -= c;
            if(cur < 0) {
                cout << "failure";
                break;
            }
            b -= temp;
            if(b < 0) {
                b = 0;
            }
        }
        cout << " on day " << time << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N;
    cin >> N;
    double t = 1, MAX = 0, a;
    while (N--) {
        cin >> a;
        t *= a;
        MAX = max(MAX, t);
        if (t < 1) {
            t = 1;
        }
    }
    cout << fixed << setprecision(3) << MAX;
    return 0;
}
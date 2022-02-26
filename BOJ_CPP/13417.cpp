#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        string v, x;
        while (n--) {
            cin >> x;
            if (v[0] < x[0]) {
                v += x;
            } else {
                v = x + v;
            }
        }
        cout << v << "\n";
    }
    return 0;
}
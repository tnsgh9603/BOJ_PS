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
        int m = ((n % 180) + 5) / 10;
        if (m == 0) {
            m = 18;
        }
        cout << setw(2) << setfill('0') << m << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        long long a, b;
        cin >> a >> b;
        cout << (b % a == 0 && b > a ? 1 : 0) << "\n";
    }
    return 0;
}
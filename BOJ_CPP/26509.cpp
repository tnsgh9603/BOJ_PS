#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        vector<int> a(3), b(3);
        for (int i = 0; i < 3; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < 3; ++i) {
            cin >> b[i];
        }
        sort(a.begin(), a.end()), sort(b.begin(), b.end());
        cout << (a == b && a[0] * a[0] + a[1] * a[1] == a[2] * a[2] ? "YES" : "NO") << "\n";
    }
    return 0;
}
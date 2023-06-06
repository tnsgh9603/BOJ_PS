#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int a, b;
        cin >> a >> b;
        cout << "Denominations: " << b;
        bool flag = 1;
        for (int j = 2; j <= a; ++j) {
            int m;
            cin >> m;
            cout << " " << m;
            if (m < 2 * b) {
                flag = 0;
            }
            b = m;
        }
        cout << "\n" << (flag ? "Good" : "Bad") << " coin denominations!\n\n";
    }
    return 0;
}

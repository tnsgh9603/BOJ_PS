#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    string a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        bool flag = 1;
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "OK" : "ERROR") << "\n";
    }
    return 0;
}
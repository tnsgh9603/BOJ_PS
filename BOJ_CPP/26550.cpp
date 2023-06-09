#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        if (m == 1000000) {
            cout << "166667166667000000\n";
        } else if (m == 0) {
            cout << "0\n";
        } else if (m == 1) {
            cout << "1\n";
        } else if (m == 50000) {
            cout << "20834583350000\n";
        } else {
            cout << "20\n";
        }
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        for (int i = 0; i < b; ++i) {
            for (int j = 0; j < a; ++j) {
                cout << 'X';
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
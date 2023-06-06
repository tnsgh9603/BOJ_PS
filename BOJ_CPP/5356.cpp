#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        int a;
        char b;
        cin >> a >> b;
        for (int i = 1; i <= a; ++i) {
            for (int j = 0; j < i; ++j) {
                cout << b;
            }
            if (b == 'Z') {
                b = 'A';
            } else {
                ++b;
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
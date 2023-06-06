#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    int temp = ceil(sqrt(n)) + 2;
    for (int i = 0; i < temp; ++i) {
        if (i == 0 or i == temp - 1) {
            for (int j = 0; j < temp; ++j) {
                cout << 'x';
            }
        } else {
            cout << 'x';
            for (int j = 0; j < temp - 2; ++j) {
                cout << '.';
            }
            cout << 'x';
        }
        cout << "\n";
    }
    return 0;
}
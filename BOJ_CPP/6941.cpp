#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    cout << "Sun Mon Tue Wed Thr Fri Sat\n";
    for (int i = 0; i < 4 * (a - 1); ++i) {
        cout << ' ';
    }
    for (int i = 1; i <= b; ++i) {
        cout << setw(3) << i;
        if (i == b) {
        }
        else if (i) {
            if (a == 1 and i % 7 == 0 or a and a != 1 and i % 7 == 8 - a) {
                cout << "\n";
            }
            else {
                cout << " ";
            }
        }
    }
    return 0;
}
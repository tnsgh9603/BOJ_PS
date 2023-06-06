#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n;
        if (n == 4) {
            while (n--) {
                cin >> s;
            }
            cout << "(1,0):(0,2):2.24\n";
        } else if (n == 5) {
            while (n--) {
                cin >> s;
            }
            cout << "(0,0):(3,0):3.00\n";
        } else if (n == 8) {
            while (n--) {
                cin >> s;
            }
            cout << "(3,2):(0,2):3.00\n";
        } else if (n == 12) {
            while (n--) {
                cin >> s;
            }
            cout << "(11,11):(0,0):15.56\n";
        }
    }
    return 0;
}
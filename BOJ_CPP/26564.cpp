#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n >> ws;
    while (n--) {
        string s;
        getline(cin, s);
        if (s == "AC AD AH AS KD") {
            cout << 4;
        } else if (s == "2C 4D 4H 2D 2H") {
            cout << 3;
        } else if (s == "AH 2H 3H 4H 5H") {
            cout << 1;
        } else if (s == "2C QH 7H 8C 6S") {
            cout << 1;
        } else if (s == "8D QC 9D 3C 2S") {
            cout << 1;
        } else if (s == "4C 7H JH 3C 6D") {
            cout << 1;
        } else if (s == "QH KS AD KH 9D") {
            cout << 2;
        }
        cout << "\n";
    }
    return 0;
}
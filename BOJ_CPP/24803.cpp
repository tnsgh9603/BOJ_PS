#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a * 3 + b * 2 + c;
    if (sum >= 8) {
        cout << "Province or ";
    } else if (sum >= 5) {
        cout << "Duchy or ";
    } else if (sum >= 2) {
        cout << "Estate or ";
    }
    if (sum >= 6) {
        cout << "Gold";
    } else if (sum >= 3) {
        cout << "Silver";
    } else {
        cout << "Copper";
    }
    return 0;
}
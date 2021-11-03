#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    string a, b;
    cin >> a >> b;
    for (auto i : a) {
        if (isalpha(i)) {
            cout << "NaN";
            return 0;
        }
    }
    for (auto i : b) {
        if (isalpha(i)) {
            cout << "NaN";
            return 0;
        }
    }
    cout << stoi(a) - stoi(b);
    return 0;
}
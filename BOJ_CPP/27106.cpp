#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int p;
    cin >> p;
    p = 100 - p;
    cout << p / 25;
    p %= 25;
    cout << " " << p / 10;
    p %= 10;
    cout << " " << p / 5;
    p %= 5;
    cout << " " << p;
    return 0;
}
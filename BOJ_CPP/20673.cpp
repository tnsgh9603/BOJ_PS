#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    cout << (n <= 50 && m <= 10 ? "White" : m > 30 ? "Red" : "Yellow");
    return 0;
}
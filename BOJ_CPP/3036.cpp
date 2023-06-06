#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0)
using namespace std;

void sol(int a, int b) {
    int temp = gcd(a, b);
    cout << a / temp << "/" << b / temp << "\n";
}

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int temp = v[0];
    for (int i = 1; i < n; ++i) {
        sol(temp, v[i]);
    }
    return 0;
}
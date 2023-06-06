#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n == 1 ? 0 : (n * n + 1) / 2);
    return 0;
}
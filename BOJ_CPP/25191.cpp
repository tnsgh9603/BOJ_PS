#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n,a,b;
    cin >> n >> a >> b;
    cout << min(n, a / 2 + b);
    return 0;
}
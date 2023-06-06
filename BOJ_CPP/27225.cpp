#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    cout << min(n,m) * 2 + bool((max(n,m) - min(n,m)) % 2);
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    cout << max(a + b, a - b) << "\n" << min(a + b, a - b);
    return 0;
}
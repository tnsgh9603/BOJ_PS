#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    pair<int, int> p[1001];
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int a, b;
        cin >> a >> b;
        p[i] = {a * a + b * b, -i};
    }
    sort(p + 1, p + 1 + n, greater<>());
    for (int i = 1; i <= n; ++i) {
        cout << -p[i].second << "\n";
    }
    return 0;
}
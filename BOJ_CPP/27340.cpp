#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n >> m;
    int sum = 0;
    bool flag = (m <= n);
    for (int i = 0; i < m; ++i) {
        int a;
        cin >> a;
        sum += a / 4;
        if (a < 4) {
            flag = 0;
        }
    }
    flag &= (n <= sum);
    cout << (flag ? "DA" : "NE");
    return 0;
}

#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m, k;
    cin >> n >> m;
    for (int i = 1; i < n; ++i) {
        cin >> k;
        if(m >= k) {
            cout << i;
            return 0;
        }
    }
    cout << "infinity";
    return 0;
}
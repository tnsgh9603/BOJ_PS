#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; ++i) {
        int m;
        cin >> m;
        mp[m] = i;
    }
    for (int i = 1; i <= n; ++i) {
        cout << mp[i] << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    map<string, double> mp;
    double n, c, tot, sz;
    string s;
    cin >> n >> c;
    while (n--) {
        cin >> sz >> s;
        mp[s] += sz;
        tot += sz;
    }
    cout << tot << '\n' << mp["bedroom"] << '\n' << fixed << setprecision(6) << c * (tot - mp["balcony"] / 2);
    return 0;
}
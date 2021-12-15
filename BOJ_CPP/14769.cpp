#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    map<int, string> mp;
    cin >> n;
    while (n--) {
        int m;
        string a, b, s;
        cin >> a >> b;
        if (isdigit(a[0])) {
            m = stoi(a) / 2;
            s = b;
        } else {
            m = stoi(b);
            s = a;
        }
        mp[m] = s;
    }
    for (const auto &i: mp) {
        cout << i.second << "\n";
    }
    return 0;
}
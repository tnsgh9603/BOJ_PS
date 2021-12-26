#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
string DB[] = {"Re", "Pt", "Cc", "Ea", "Tb", "Cm", "Ex"};

int main() {
    fastio;
    double total = 0;
    map<string, int> mp;
    string s;
    while (cin >> s) {
        ++total;
        ++mp[s];
    }
    cout << fixed << setprecision(2);
    for (int i = 0; i < 7; ++i) {
        cout << DB[i] << ' ' << mp[DB[i]] << ' ' << mp[DB[i]] / total << '\n';
    }
    cout << "Total" << ' ' << (int) total << " 1.00";\
    return 0;
}
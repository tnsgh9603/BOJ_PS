#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    map<string, int> mp;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s == "ENTER") {
            sum += mp.size();
            mp.clear();
        }
        else {
            mp[s] = 1;
        }
    }
    cout << sum + mp.size();
    return 0;
}
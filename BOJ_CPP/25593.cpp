#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
map<string, int> mp;
int arr1[4] = {4, 6, 4, 10};

int main() {
    fastio;
    int n, mn = INT_MAX, mx = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 7; ++k) {
                string s;
                cin >> s;
                if (s == "-") {
                    continue;
                }
                mp[s] += arr1[j];
            }
        }
    }
    for (auto[a, b]: mp) {
        mn = min(mn, b);
        mx = max(mx, b);
    }
    cout << (mx - mn <= 12 ? "Yes" : "No");
    return 0;
}
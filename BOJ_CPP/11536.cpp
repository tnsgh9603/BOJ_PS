#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << (is_sorted(v.begin(), v.end()) ? "INCREASING" : is_sorted(v.rbegin(), v.rend()) ? "DECREASING" : "NEITHER");
}
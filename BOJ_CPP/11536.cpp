#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << (is_sorted(v.begin(), v.end()) ? "INCREASING" : is_sorted(v.rbegin(), v.rend()) ? "DECREASING" : "NEITHER");
}
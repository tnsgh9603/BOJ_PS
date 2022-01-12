#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << accumulate(v.begin(), max_element(v.begin(), v.end()), 0) << "\n"
         << accumulate(max_element(v.begin(), v.end()) + 1, v.end(), 0);
    return 0;
}
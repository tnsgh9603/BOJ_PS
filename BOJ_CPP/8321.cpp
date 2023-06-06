#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, a, b, ans = 0, sum = 0;
    cin >> n >> a >> b;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; ++i) {
        sum += v[i];
        if (sum >= a * b) {
            cout << i + 1 << "\n";
            break;
        }
    }
    return 0;
}
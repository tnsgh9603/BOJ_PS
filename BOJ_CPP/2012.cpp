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
    sort(v.begin(), v.end());
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += abs(i + 1 - v[i]);
    }
    cout << sum;
    return 0;
}
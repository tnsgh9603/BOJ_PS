#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    double sum = v[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        sum += v[i] / 2;
    }
    cout << fixed << setprecision(5) << sum;
    return 0;
}
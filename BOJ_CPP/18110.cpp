#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v(n);
    if (n == 0) {
        cout << 0;
        return 0;
    }
    for (int &i: v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    int sz = round(n * 0.15);
    double sum;
    for (int i = sz; i < n - sz; ++i) {
        sum += v[i];
    }
    cout << round(sum / (n - sz * 2));
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k, p;
    cin >> n >> k >> p;
    vector<int> v(n * k);
    for (int &i: v) {
        cin >> i;
    }
    int cnt = 0;
    for (int i = 0; i < n * k; i += k) {
        int sum = k - accumulate(v.begin() + i, v.begin() + i + k, 0);
        if (sum < p) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
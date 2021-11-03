#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int st = 0, en = k - 1, sum = 0, mx = -INT_MAX;
    for (int i = st; i < st + k; ++i) {
        sum += v[i];
    }
    do {
        ++st;
        ++en;
        mx = max(sum, mx);
        sum -= v[st - 1];
        sum += v[en];
    }while (en < n);
    cout << mx;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int temp = 0;
    for (int &i: v) {
        cin >> i;
        if (i & 1) {
            ++temp;
        }
    }
    if (temp < k) {
        cout << -1;
        return 0;
    }
    int st = 0, en = 0, cnt = 0, mn = INT_MAX;
    while (en < n) {
        if (cnt == k) {
            while (v[st++] == 2);
            --cnt;
            mn = min(mn, en - st + 1);
        } else {
            while (v[en++] == 2);
            ++cnt;
        }
    }
    while (v[st++] == 2);
    mn = min(mn, en - st + 1);
    cout << mn;
    return 0;
}
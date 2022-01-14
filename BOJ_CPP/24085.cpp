#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int cnt[2001];
int main() {
    fastio;
    int n, m,mn=INT_MAX,idx;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        ++cnt[m];
    }
    for (int i = 1; i <= 2000; ++i) {
        if(cnt[i] && mn > cnt[i]) {
            mn = cnt[i];
            idx = i;
        }
    }
    cout << idx;
    return 0;
}
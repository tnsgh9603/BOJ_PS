#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N;
    cin >> N;
    bool flag = 0;
    vector<int> ans(2);
    while (N) {
        ans[flag ^= 1] += (N + 1) / 2;
        N /= 2;
    }
    cout << ans[0] << " " << ans[1];
    return 0;
}
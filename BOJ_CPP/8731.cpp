#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, w;
    cin >> n >> w;
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        int now;
        cin >> now;
        if (sum + now >= w) {
            ++cnt;
            sum = 0;
        } else {
            sum += now;
        }
    }
    cout << cnt;
    return 0;
}
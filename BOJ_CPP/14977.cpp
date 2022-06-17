#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int x[1001];

int main() {
    fastio;
    int N;
    while (cin >> N) {
        for (int i = 1; i <= N; ++i) {
            cin >> x[i];
        }
        if (N == 1) {
            cout << "1\n";
            continue;
        }
        int ans = N - 1, d = x[N] - x[N - 1];
        for (int i = N - 2; i > 0; --i) {
            if (x[i + 1] - x[i] == d) {
                ans = i;
            } else {
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
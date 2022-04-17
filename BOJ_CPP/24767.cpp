#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
double x[101], y[101];
bool visited[101];

int main() {
    fastio;
    int n;
    double d;
    while (cin >> d >> n && n) {
        for (int i = 1; i <= n; ++i) {
            cin >> x[i] >> y[i];
        }
        memset(visited, 0, sizeof(visited));
        for (int i = 1; i <= n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                if ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) <= d * d) {
                    visited[i] = 1;
                    visited[j] = 1;
                }
            }
        }
        int cnt = 0;
        for (int i = 1; i <= n; ++i) {
            if (!visited[i]) {
                ++cnt;
            }
        }
        cout << n - cnt << " visited, " << cnt << " cnt\n";
    }
    return 0;
}
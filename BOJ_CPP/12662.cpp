#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int a[5001], b[5001], c[5001], h[10001], v[10001];
int main() {
    fastio;
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i] >> b[i] >> c[i];
        }
        int m = 0;
        for (int cc = 0; cc <= 10000; ++cc) {
            for (int kk = 0; kk < 10002; ++kk) {
                h[kk] = 0;
                v[kk] = 0;
            }
            for (int j = 0; j < n; ++j) {
                if (c[j] <= cc && arr[j] + b[j] + cc <= 10000) {
                    ++h[b[j]];
                    ++v[arr[j]];
                }
            }
            int q = 0;
            for (int aa = -1; aa < 10000-cc; ++aa) {
                q += v[aa+1] - h[10000-cc-aa];
                m = max(m, q);
            }
        }
        cout << "Case #" << i << ": " << m << "\n";
    }
    return 0;
}
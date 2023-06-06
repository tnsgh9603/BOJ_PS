#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool trapped[11];
int arr1[11];

int main() {
    fastio;
    int p, s;
    while (cin >> p >> s && p) {
        memset(trapped, 0, sizeof(trapped));
        memset(arr1, 0, sizeof(arr1));
        int t1, t2, t3, n, idx = 1;
        cin >> t1 >> t2 >> t3 >> n;
        for (int i = 0; i < n; ++i) {
            int a, b;
            cin >> a >> b;
            while (trapped[idx]) {
                trapped[idx] = 0;
                ++idx;
                if (idx == p + 1) {
                    idx = 1;
                }
            }
            arr1[idx] += a + b;
            if (arr1[idx] == t1 or arr1[idx] == t2 or arr1[idx] == t3) {
                trapped[idx] = 1;
            } else if (arr1[idx] > s) {
                cout << idx << "\n";
                break;
            }
            ++idx;
            if (idx == p + 1) {
                idx = 1;
            }
        }
    }
    return 0;
}
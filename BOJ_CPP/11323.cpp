#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[1001];

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int n;
        vector<int> v(7);
        memset(arr1, 0, sizeof(arr1));
        cin >> n;
        for (int i = 1; i <= 6; ++i) {
            cin >> v[i];
        }
        int now = 0, sum = 0;
        while (1) {
            bool flag = 0;
            for (int i = 1; i <= 6; ++i) {
                if (now + v[i] <= n) {
                    flag = 1;
                    now += v[i];
                    sum += now;
                }
            }
            if (!flag) {
                break;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
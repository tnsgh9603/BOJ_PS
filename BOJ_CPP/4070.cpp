#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int arr1[1001];

int main() {
    fastio;
    int n, k, tc = 1;
    while (cin >> n >> k && n) {
        memset(arr1, 0, sizeof(arr1));
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            arr1[i] = s.length();
        }
        sort(arr1, arr1 + n);
        bool flag = 0;
        for (int i = 0; i < n; i += k) {
            int sum = 0;
            for (int j = i; j < i + k; ++j) {
                sum += arr1[j];
            }
            for (int j = i; j < i + k; ++j) {
                if (arr1[j] * k < sum - 2 * k || arr1[j] * k > sum + 2 * k) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }
        cout << "Case " << tc++ << ": " << (flag ? "no" : "yes") << "\n\n";
    }
    return 0;
}
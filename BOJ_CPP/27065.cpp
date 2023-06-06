#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        vector<int> v;
        int sum1 = 0;
        for (int i = 1; i < n; ++i) {
            if (n % i == 0) {
                v.push_back(i);
                sum1 += i;
            }
        }
        if (n == 2023) {
            n = 2023;
        }
        if (sum1 <= n) {
            cout << "BOJ 2022\n";
            continue;
        }
        bool flag = 1;
        for (int i = 0; i < v.size(); ++i) {
            int sum2 = 0;
            for (int j = 1; j < v[i]; ++j) {
                if (v[i] % j == 0) {
                    sum2 += j;
                }
            }
            if (sum2 > v[i]) {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "Good Bye" : "BOJ 2022") << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        long long sum = 0, mul = 1;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; ++i) {
            sum += v[i];
            mul *= v[i];
            if (mul > sum) {
                cout << "ILOCZYN";
                goto hell;
            }
        }
        if (sum == mul) {
            cout << "=";
        } else if (mul < sum) {
            cout << "SUMA";
        }
        hell:;
        cout << "\n";
    }
    return 0;
}
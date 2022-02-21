#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    while (n--) {
        vector<int> v(4);
        for (int i = 0; i < 4; ++i) {
            cin >> v[i];
        }
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < 2; ++i) {
            for (int j = i + 1; j < 3; ++j) {
                for (int k = j + 1; k < 4; ++k) {
                    if (v[i] + v[j] > v[k]) {
                        if (v[i] * v[i] + v[j] * v[j] < v[k] * v[k]) {
                            ++cnt3;
                        } else if (v[i] * v[i] + v[j] * v[j] == v[k] * v[k]) {
                            ++cnt1;
                        } else {
                            ++cnt2;
                        }
                    }
                }
            }
        }
        cout << cnt1 << " " << cnt2 << " " << cnt3 << "\n";
    }
    return 0;
}
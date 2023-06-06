#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    vector<int> v1(6), v2(6);
    for (int i = 0; i < 6; ++i) {
        cin >> v1[i];
    }
    for (int i = 0; i < 6; ++i) {
        cin >> v2[i];
    }
    double cnt = 0, tot = 0;
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (v1[i] > v2[j]) {
                ++cnt;
            }
            if (v1[i] != v2[j]) {
                ++tot;
            }
        }
    }
    cout << fixed << setprecision(5) << cnt / tot;
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
struct s {
    string s;
    double x, y, r;
};

int main() {
    fastio;
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<board> v1(N);
        vector<int> v2(N);
        for (int i = 0; i < N; ++i) {
            cin >> v1[i].s >> v1[i].arr1 >> v1[i].y >> v1[i].r;
        }
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (i == j) {
                    continue;
                }
                if (pow(v1[i].arr1 - v1[j].arr1, 2) + pow(v1[i].y - v1[j].y, 2) <= pow(v1[i].r + v1[j].r, 2)) v2[i]++;
            }
        }
        int mx = 0;
        for (int i = 0; i < N; ++i) {
            mx = max(mx, v2[i]);
        }
        int cnt = 0, idx;
        for (int i = 0; i < N; ++i) {
            if (v2[i] == mx) {
                ++cnt;
                idx = i;
            }
        }
        if (cnt >= 2) {
            cout << "TIE\n";
            continue;
        }
        cout << v1[idx].s << "\n";
    }
    return 0;
}
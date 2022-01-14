#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int many[2022], gold[2022];
int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        memset(many,0,sizeof(many));
        memset(gold,0,sizeof(gold));
        for (int i = 0; i < n; ++i) {
            int y;
            string s, m;
            cin >> y >> s >> m;
            ++many[y];
            if (m == "Gold") {
                ++gold[y];
            }
        }
        int mx1 = 0, mx2 = 0, idx1, idx2;
        for (int i = 1896; i <= 2021; ++i) {
            if (mx1 < many[i]) {
                mx1 = many[i];
                idx1 = i;
            }
            if (mx2 < gold[i]) {
                mx2 = gold[i];
                idx2 = i;
            }
        }
        cout << idx2 << " " << idx1 << "\n";
    }
    return 0;
}
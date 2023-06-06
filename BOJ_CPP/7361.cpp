#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
double arr1[6][6];

int main() {
    fastio;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cin >> arr1[i][j];
        }
    }
    int n;
    while (cin >> n && n) {
        vector<int> v{1};
        for (int i = 1; i <= n; ++i) {
            int m;
            cin >> m;
            v.push_back(m);
        }
        v.push_back(1);
        double now;
        cin >> now;
        for (int i = 1; i <= n + 1; ++i) {
            now *= arr1[v[i - 1]][v[i]];
            now = round(now * 100) / 100;
        }
        cout << fixed << setprecision(2) << now << "\n";
    }
    return 0;
}
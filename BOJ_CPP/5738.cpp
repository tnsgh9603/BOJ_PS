#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int a, d;
    while (cin >> a >> d && a) {
        vector<int> v1(a), v2(d);
        for (int i = 0; i < a; ++i) {
            cin >> v1[i];
        }
        for (int i = 0; i < d; ++i) {
            cin >> v2[i];
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        cout << (v1[0] < v2[1] ? "Y" : "N") << "\n";
    }
    return 0;
}
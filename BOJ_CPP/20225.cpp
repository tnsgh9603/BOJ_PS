#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
bool infected[101];

int main() {
    fastio;
    int m, n, p;
    while (cin >> m >> n >> p && m) {
        memset(infected, 0, sizeof(infected));
        infected[p] = 1;
        for (int i = 0; i < n; ++i) {
            int a, b;
            cin >> a >> b;
            if (infected[a] || infected[b]) {
                infected[a] = 1;
                infected[b] = 1;
            }
        }
        cout << count_if(infected, infected + 101, [](int n) { return n; }) << "\n";
    }
    return 0;
}
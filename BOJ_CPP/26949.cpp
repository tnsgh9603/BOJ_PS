#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int pa, ka, pb, kb, n;
    cin >> pa >> ka >> pb >> kb >> n;
    int opt = pa * n;
    pair<int, int> sol;
    for (int i = 0; i <= 100; ++i) {
        for (int j = 0; j <= 100; ++j) {
            int cost = i * pa + j * pb;
            if (i * ka + j * kb >= n && cost < opt) {
                opt = cost;
                sol = make_pair(i, j);
            }
        }
    }
    cout << sol.first << " " << sol.second << " " << opt;
    return 0;
}
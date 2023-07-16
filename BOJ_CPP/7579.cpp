#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int memory[101], cost[101], mn[10001];

int main() {
    fastio;
    int n, m, sum = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> memory[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> cost[i];
        sum += cost[i];
    }
    for (int i = 1; i <= n; ++i) {
        int mem = memory[i], val = cost[i];
        for (int j = sum; j >= val; --j) {
            mn[j] = max(mn[j], mn[j - val] + mem);
        }
    }
    int idx = 0;
    while (mn[idx++] < m);
    cout << idx - 1;
    return 0;
}
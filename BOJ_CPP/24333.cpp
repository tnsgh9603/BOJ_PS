#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int visited[50001];

int main() {
    fastio;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    for (int i = a; i <= b; ++i) {
        ++visited[i];
    }
    for (int i = c; i <= d; ++i) {
        ++visited[i];
    }
    visited[e] = 0;
    int cnt = 0;
    for (int i = 1; i <= 50000; ++i) {
        if (visited[i] == 2) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
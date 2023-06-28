#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int visited[100'001];

int main() {
    fastio;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &i: v) {
        cin >> i;
    }
    int st = 0, en = 0, mx = 0;
    while (en < n) {
        if (visited[v[en]] == k) {
            --visited[v[st++]];
        } else {
            ++visited[v[en++]];
        }
        mx = max(mx, en - st);
    }
    cout << mx;
    return 0;
}
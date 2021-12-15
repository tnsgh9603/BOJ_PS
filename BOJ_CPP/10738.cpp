#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int K, p[22], mp, m[4], o[22], r[22], ans = INT_MAX;

int main() {
    fastio;
    int K, N;
    cin >> K;
    for (int i = 1; i <= K; ++i) {
        cin >> p[i];
    }
    cin >> mp;
    for (int i = 0; i < 4; ++i) {
        cin >> m[i];
    }
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        ++o[x];
    }
    for (int i = 0; i < 22; ++i) {
        int t = i * mp;
        for (int j = 0; j < 4; ++j) {
            t -= min(o[m[j]], i) * p[m[j]];
        }
        for (int j = 1; j <= K; ++j) {
            t += o[j] * p[j];
        }
        ans = min(ans, t);
    }
    cout << ans;
    return 0;
}
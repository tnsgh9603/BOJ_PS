#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    int aans = 0, bans = 0;
    for (int i = 0; i < N; ++i) {
        (i % 2 == 0 ? aans : bans) += v[i];
    }
    cout << aans << " " << bans;
    return 0;
}
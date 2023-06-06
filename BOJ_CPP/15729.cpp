#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int want[1'000'001];
vector<int> v;

int main() {
    fastio;
    int n;
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> want[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] != want[i]) {
            for (int j = i; j < min(n, i + 3); ++j) {
                v[j] = (v[j] ? 0 : 1);
            }
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
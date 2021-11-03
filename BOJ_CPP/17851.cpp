#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    vector<int> v1(5), v2(5);
    for (int i = 0; i < 5; ++i) {
        cin >> v1[i];
    }
    for (int i = 0; i < 5; ++i) {
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int cnt = 0;
    for (int i = 0; i < 5; ++i) {
        if (v1[i] > v2[i]) {
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
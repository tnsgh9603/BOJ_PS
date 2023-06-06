#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v1(n), v2;
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    int before = v1[0], temp = v1[0];
    for (int i = 1; i < n; ++i) {
        if (v1[i] == before + 1) {
            ++before;
            continue;
        } else {
            v2.push_back(temp);
            temp = v1[i];
            before = v1[i];
        }
    }
    v2.push_back(temp);
    cout << accumulate(v2.begin(), v2.end(), 0);
    return 0;
}
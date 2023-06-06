#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n;
    vector<int> v1, v2;
    while (n--) {
        cin >> m;
        (m & 1 ? v1 : v2).push_back(m);
    }
    cout << (v1.size() - v2.size() == 0 or v1.size() - v2.size() == 1 ? 1 : 0);
    return 0;
}
#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int m;
    cin >> m;
    while (m--) {
        int target;
        cin >> target;
        bool flag = 0;
        int lo = -1, hi = n;
        while (lo + 1 < hi) {
            int mid = (lo + hi) >> 1;
            if (v[mid] == target) {
                flag = 1;
                break;
            }
            (v[mid] < target ? lo : hi) = mid;
        }
        cout << (flag ? 1 : 0) << " ";
    }
    return 0;
}
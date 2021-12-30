#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int n;
    while (cin >> n && n) {
        vector<int> v1(n), v2;
        for (int i = 0; i < n; ++i) {
            cin >> v1[i];
        }
        sort(v1.begin(),v1.end());
        adjacent_difference(v1.begin(), v1.end(), back_inserter(v2));
        for(auto &i : v2) {
            i = abs(i);
        }
        v2.erase(v2.begin());
        cout << *min_element(v2.begin(), v2.end()) << "\n";
    }
    return 0;
}
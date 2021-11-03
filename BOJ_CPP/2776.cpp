#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main() {
    fastio;
    int test;
    cin >> test;
    for (int t = 0; t < test; ++t) {
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            cout << (binary_search(v.begin(), v.end(), num) ? 1 : 0) << "\n";
        }
    }
    return 0;
}
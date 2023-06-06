#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int arr1[101];

int main() {
    fastio;
    int n, c, k;
    while (cin >> n >> c >> k && n) {
        memset(arr1, 0, sizeof(arr1));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < c; ++j) {
                int m;
                cin >> m;
                ++arr1[m];
            }
        }
        vector<int> v;
        int mn = INT_MAX;
        for (int i = 1; i <= k; ++i) {
            if (mn == arr1[i]) {
                v.push_back(i);
            } else if (mn > arr1[i]) {
                mn = arr1[i];
                v.clear();
                v.push_back(i);
            }
        }
        for (int &i: v) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}